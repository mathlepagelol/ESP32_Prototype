#include <Arduino.h>

//La LED est set à la PIN2
const int led = 2;
unsigned int compteur = 0;

void setup() {
  Serial.begin(115200);
  Serial.println("Test");
  pinMode(led, OUTPUT);
}
//Fait flash la lED à chaque seconde
void loop() {
  Serial.println("Boucle : " + String(compteur));
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  compteur++;
}