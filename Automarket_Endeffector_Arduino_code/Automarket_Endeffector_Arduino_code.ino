/*
 Name:		Automarket_end_effector_2.ino
 Created:	8/10/2021 2:23:51 PM
 Author:	cslaw
*/

// the setup function runs once when you press reset or power the board
//#include "../../../../../../../Program Files (x86)/Arduino/hardware/arduino/avr/cores/arduino/Arduino.h"
int Lswitch1 = 2;
int Lswitch2 = 3;
//int led = 13;
int flagA = 0;
int flagB = 0;

void setup()
{
    Serial.begin(9600);
    pinMode(Lswitch1, INPUT);
    pinMode(Lswitch2, INPUT);
    //pinMode(led, OUTPUT);

}

void loop()
{

//////////Right Switch    
    if ((digitalRead(Lswitch1) == LOW) && (flagA == 0))
    {
        char A = 1;
        Serial.write(A); //"right switch is closed"
        flagA = 1;
        delay(20);
    }

    if ((digitalRead(Lswitch1) == HIGH) && (flagA == 1))
    {
        char B = 2;
        Serial.write(B);//"right switch is opened"
        flagA = 0;
        delay(20);
    }

    if (flagA == 1)
    {
//        digitalWrite(led, HIGH);
//        delay(1000);
//        digitalWrite(led, LOW);
        delay(20);
    }

    if (flagA == 1)
    {
//        digitalWrite(led, LOW);
    }

    digitalWrite(Lswitch1, HIGH);


////////////////////Left switch
    if ((digitalRead(Lswitch2) == LOW) && (flagB == 0))
    {
        char C = 3;
        Serial.write(C);//"left switch is closed"
        flagB = 1;
        delay(20);
    }

    if ((digitalRead(Lswitch2) == HIGH) && (flagB == 1))
    {
        char D = 4;
        Serial.write(D);//"left switch is opened"
        flagB = 0;
        delay(20);
    }

    if (flagB == 1)
    {
//        digitalWrite(led, HIGH);
//        delay(1000);
//        digitalWrite(led, LOW);
        delay(20);
    }

    if (flagB == 1)
    {
//        digitalWrite(led, LOW);
    }

    digitalWrite(Lswitch2, HIGH);
}

//test1