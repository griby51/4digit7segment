//Faire un defilement de texte grace a Arduino et un afficheur 4digit 7segment

#include <Arduino.h>
#include <SevenSegmentDisplay.h>

int digit[4] = {10, 11, 12, 13};

SevenSegmentDisplay sevenSegmentDisplay(2, 3, 4, 5, 6, 7, 8, 9, true);

void selectDigit(int _digit){
  for (int i = 0; i < 4; i++){
    if (i != _digit){
      pinMode(digit[i], INPUT);
    }
  }
  pinMode(_digit, OUTPUT);
  digitalWrite(_digit, HIGH);
}


void setup(){
  Serial.begin(9600);
  Serial.println("Arduino connected");
  sevenSegmentDisplay.clearDisplay();
  sevenSegmentDisplay.displayDecimalPoint(false);

  for (int i = 10; i <= 13; i++){
    pinMode(i, INPUT);
  }
}

void loop(){
  char charReceived;

  int charReceivedInt;

  charReceivedInt = Serial.available();

  char toDisplay[] = {' ', ' ', ' ', ' '};
  char _toDisplay[] = {};

  while (charReceivedInt > 0)
  {
    charReceived = Serial.read();

    for (int i = 0; i < 3; i++){
      _toDisplay[i] = toDisplay[i + 1];
    }
    _toDisplay[3] = charReceived;

    Serial.println(_toDisplay);

    for (int i = 0; i < 4; i++){
      toDisplay[i] = _toDisplay[i];
    }

    Serial.println(toDisplay[0] + toDisplay[1] + toDisplay[2] + toDisplay[3]);

    int j = 0;
    while(j != 15){
      for (int i = 0; i < 4; i++){
      selectDigit(digit[i]);
      sevenSegmentDisplay.displayCharacter(toDisplay[i]);
      delay(5);
      }
      j++;
    }

    charReceivedInt--;
  }
}
