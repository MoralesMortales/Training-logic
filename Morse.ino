#include <LiquidCrystal.h>

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
int sound = 10;
int CodeRead = A0;
int SmallButtom = A1;
int EmptyButtom = A2;
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
            lcd.print("Welcome to the");
            lcd.setCursor(0, 1);
            lcd.print("Morse Translator");
            read = digitalRead(CodeRead);

            is_on = ChangeState(is_on, read, start);
        }

        lcd.clear();

        delay(700);

        int startBig = digitalRead(CodeRead);
        int startSmall = digitalRead(SmallButtom);

        lcd.setCursor(0, 0);
        int counter = 0;

        while (counter < 5)
        {

            int ReadBig = digitalRead(CodeRead);
            int ReadSmall = digitalRead(SmallButtom);

            delay(200);
            Serial.println(startBig == ReadBig);
            Serial.println(startSmall == ReadSmall);

            for (int i = 0; i <= 3 + 1; i++)
            {
                while (startBig != ReadBig || startSmall != ReadSmall)
                {
                    Serial.println("Ingreso exitoso");
                    int ReadBig = digitalRead(CodeRead);
                    int ReadSmall = digitalRead(SmallButtom);

                    if (startBig != ReadBig)
                    {
                        uwu[i] = '-';
                        Serial.println("Ingreso exitoso de -");

                        delay(500);
                    }

                    else if (startSmall != ReadSmall)
                    {
                        uwu[i] = '.';
                        Serial.println("Ingreso exitoso de .");
                        delay(500);
                    }
                }
            }

            String code;

            for (int s = 0; s < 5; s++)
            {
                code += uwu[s];
            }

            lcd.print(code);
        }
    }
}