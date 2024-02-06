#include <Arduino.h>
#include <LiquidCrystal.h>

// put function declarations here:
int myFunction(int, int);

String translateMorse(String toTranslate)
{
    String morseCode = toTranslate;

    switch (morseCode[0])
    {
    case '.':
        switch (morseCode[1]) //.o
        {
        case '.':
            switch (morseCode[2]) //..o
            {
            case '.':
                switch (morseCode[3]) //...o
                {
                case '.':
                    switch (morseCode[4])
                    {
                    case '.':
                        return "5";
                    case '-':
                        return "4";
                    default:
                        break;
                    }

                    return "H";

                case '-':
                    return "V";

                default:
                    break;
                }
                return "S";

            case '-':
                switch (morseCode[3]) // ..-o
                {
                case '-':
                    return "?";

                case '.':
                    return "F";

                default:
                    break;
                }
                return "U";

            default:
                break;
            }
            return "I";
        case '-':
            switch (morseCode[2])
            { //.-o
            case '.':
                switch (morseCode[3])
                { //.-.o
                case '.':
                    return "L";

                case '-':
                    return "C";

                default:
                    break;
                }
                return "R";

            case '-':
                switch (morseCode[3])
                {
                case '.':
                    return "P";
                case '-':
                    return "J";
                default:
                    break;
                }
                return "W";

            default:
                break;
            }
            return "A";
        }
        return "E";

    case '-':
        switch (morseCode[1])
        { //-o

        case '.':
            switch (morseCode[2])
            { //-.o
            case '.':
                switch (morseCode[3])
                { //-..o
                case '.':
                    switch (morseCode[4])
                    { //-...o
                    case '.':
                        return "6";
                    case '-':
                        return "?";
                    default:
                        break;
                    }
                    return "B";
                case '-':
                    switch (morseCode[4])
                    { //-..-o
                    case '-':
                        return "?";

                    case '.':
                        return "?";

                    default:
                        break;
                    }
                    return "X";
                default:
                    break;
                }
                return "D";
            case '-':
                switch (morseCode[3])
                { //-.-0
                case '.':
                    switch (morseCode[4])
                    {
                    case '.':
                        return "?";
                    case '-':
                        return "?";
                    default:
                        break;
                    }
                    return "?";
                case '-':
                    return "Y";
                default:
                    break;
                }
                return "K";
            }
            return "N";
        case '-':
            switch (morseCode[2])
            { //--o
            case '-':
                switch (morseCode[3])
                {
                case '.':
                    return "?";
                case '-':
                    switch (morseCode[4])
                    {
                    case '-':
                        return "0";
                    case '.':
                        return "9";
                    default:
                        break;
                    }
                default:
                    break;
                }
                return "O";
            case '.':
                switch (morseCode[3])
                {
                case '-':
                    return "Q";
                case '.':
                    return "Z";
                default:
                    break;
                }
                return "G";

            default:
                break;
            }
            return "M";
        default:
            break;
        }
        return "T";
    default:
        return "ERROR";
    }
}

int ChangeState(int is_on, int read, int start)
{

    while (read != start)
    {

        if (is_on == 0)
        {
            is_on = 1;
        }

        else
        {
            is_on = 0;
        }

        Serial.print("Funtion done!, The device is ");
        Serial.println(is_on);

        break;
    }

    Serial.print("Funtion not done!, The device is ");
    Serial.println(is_on);

    return is_on;
}

// Configuración de los pines para la pantalla LCD
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int led_right = 9;
int led_wrong = 8;
int CodeRead = A0;
int SmallButtom = A1;
int NullButtom = A2;
int TranslateButtom = A3;
int SoundButtom = A4;
int ResetButtom = A5;

bool end = false;
int start, read;
int loops = 0;
int is_on = 0;
char uwu[5];

void setup()
{
    // Inicializar la pantalla LCD con las dimensiones adecuadas
    Serial.begin(9600);
    pinMode(led_right, OUTPUT);
    pinMode(led_wrong, OUTPUT);
    pinMode(CodeRead, INPUT);
    pinMode(SmallButtom, INPUT);
    pinMode(NullButtom, INPUT);
    pinMode(TranslateButtom, INPUT);
    pinMode(SoundButtom, INPUT);
    pinMode(ResetButtom, INPUT);
    lcd.begin(16, 2);
}

void loop()
{
    Serial.println("INI");

    start = digitalRead(CodeRead);

    while (end == false)
    {

        while (is_on != 1 && loops == 0)
        {

            lcd.setCursor(0, 0);
            lcd.print("Welcome to: the");
            lcd.setCursor(0, 1);
            lcd.print("Morse Translator");
            read = digitalRead(CodeRead);

            is_on = ChangeState(is_on, read, start);
        }

        lcd.clear();

        delay(700);

        int startBig = digitalRead(CodeRead);
        int startSmall = digitalRead(SmallButtom);
        int startNull = digitalRead(NullButtom);
        int startReset = digitalRead(ResetButtom);
        int startSound = digitalRead(SoundButtom);
        int startTranslate = digitalRead(TranslateButtom);

        lcd.setCursor(0, 0);
        int counter = 0;

        while (counter < 5)
        {

            int ReadBig = digitalRead(CodeRead);
            int ReadSmall = digitalRead(SmallButtom);
            int ReadNull = digitalRead(NullButtom);
            int ReadReset = digitalRead(ResetButtom);

            for (int i = 0; i < 5; i++)
            {
                while (i < 5)
                {
                    ReadNull = digitalRead(NullButtom);
                    ReadBig = digitalRead(CodeRead);
                    ReadSmall = digitalRead(SmallButtom);

                    if (startBig != ReadBig)
                    {
                        uwu[i] = '-';
                        Serial.println("Ingreso exitoso de -");
                        lcd.print('-');

                        delay(500);

                        break;
                    }

                    else if (startSmall != ReadSmall)
                    {
                        uwu[i] = '.';
                        Serial.println("Ingreso exitoso de .");
                        lcd.print('.');
                        delay(500);
                        break;
                    }

                    else if (ReadNull != startNull)
                    {
                        uwu[i] = ' ';
                        Serial.println("Ingreso exitoso vacio");
                        lcd.print(' ');
                        delay(500);
                        break;
                    }
                }
            }
            Serial.println("LISTO");
            lcd.clear();

            String code;

            for (int s = 0; s < 5; s++)
            {
                code += uwu[s];
            }

            lcd.print(code);

            lcd.setCursor(0, 1);
            lcd.print(translateMorse(code));

            while (startReset == ReadReset)
            {
                ReadReset = digitalRead(ResetButtom);
            }

            lcd.clear();
            delay(1000);
        }
    }
}