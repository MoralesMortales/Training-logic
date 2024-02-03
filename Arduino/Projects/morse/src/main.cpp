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
                    return "Q";

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
            break;//ddddd
            default:
                break;
            }
        }
        return "E"; // Si no se encuentra una traducción
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

            lcd.setCursor(0, 0);
            int counter = 0;

            while (counter < 5)
            {

                int ReadBig = digitalRead(CodeRead);
                int ReadSmall = digitalRead(SmallButtom);
                int ReadNull = digitalRead(NullButtom);

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

                            delay(500);

                            break;
                        }

                        else if (startSmall != ReadSmall)
                        {
                            uwu[i] = '.';
                            Serial.println("Ingreso exitoso de .");
                            delay(500);
                            break;
                        }

                        else if (ReadNull != startNull)
                        {
                            uwu[i] = ' ';
                            Serial.println("Ingreso exitoso vacio");
                            delay(500);
                            break;
                        }
                    }
                }
                Serial.println("LISTO");

                String code;

                for (int s = 0; s < 5; s++)
                {
                    code += uwu[s];
                }

                lcd.print(code);

                lcd.setCursor(0, 1);
                lcd.print(translateMorse(code));

                while (startSmall == ReadSmall || startBig == ReadBig)
                {
                    ReadBig = digitalRead(CodeRead);
                    ReadSmall = digitalRead(SmallButtom);
                }

                lcd.clear();
                delay(1000);
            }
        }
    }