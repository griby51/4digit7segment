#include <Arduino.h>


void printnumber(int x, int ledA, int ledB, int ledC, int ledD, int ledE, int ledF, int ledG, int ledDP){
    if(x == 0){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, HIGH);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, LOW);
        digitalWrite(ledDP, LOW);
    }
    if (x == 1){
        digitalWrite(ledA, LOW);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, LOW);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, LOW);
        digitalWrite(ledG, LOW);
        digitalWrite(ledDP, LOW);
    }
    if (x == 2){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, LOW);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, HIGH);
        digitalWrite(ledF, LOW);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 3){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, LOW);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 4){
        digitalWrite(ledA, LOW);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, LOW);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 5){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, LOW);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 6){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, LOW);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, HIGH);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 7){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, LOW);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, LOW);
        digitalWrite(ledG, LOW);
        digitalWrite(ledDP, LOW);
    }
    if (x == 8){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, HIGH);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
    if (x == 9){
        digitalWrite(ledA, HIGH);
        digitalWrite(ledB, HIGH);
        digitalWrite(ledC, HIGH);
        digitalWrite(ledD, HIGH);
        digitalWrite(ledE, LOW);
        digitalWrite(ledF, HIGH);
        digitalWrite(ledG, HIGH);
        digitalWrite(ledDP, LOW);
    }
}

