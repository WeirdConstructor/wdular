#include <Arduino.h>
#include <SPI.h>

void input()
{
//    digitalWrite(13, digitalRead(2));
}

const int STCP_PIN = 10;
const int SHCP_PIN = 11;
const int DS_PIN   = 12;

void setup()
{
    SPI.begin();
//rdu
//    pinMode(DS_PIN,   OUTPUT);
    pinMode(STCP_PIN, OUTPUT);
//    pinMode(SHCP_PIN, OUTPUT);

    pinMode(2, INPUT_PULLUP);
    attachInterrupt(digitalPinToInterrupt(2), input, CHANGE);
}


void loop()
{
    int state[8] = { 1, 0, 1, 0, 1, 0, 0, 1 };
    while(1)
    {
        digitalWrite(STCP_PIN, LOW);
//        digitalWrite(SHCP_PIN, LOW);

//        for (int i = 0; i < 8; i++)
//        {
            SPI.beginTransaction(SPISettings(2000000, LSBFIRST, SPI_MODE1));
            SPI.transfer(0x55);
            SPI.endTransaction();

//            digitalWrite(DS_PIN, state[7 - i] > 0 ? HIGH : LOW);
//            digitalWrite(SHCP_PIN, HIGH);
//            digitalWrite(SHCP_PIN, LOW);
//        }

//        digitalWrite(DS_PIN, LOW);
        digitalWrite(STCP_PIN, HIGH);
        delay(1000);
    }
}
