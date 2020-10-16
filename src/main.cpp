// NOM DU PROGRAMME : ESP32_PROTOTYPE
// REALISATION INFORMATIQUE : Mathieu Lepage
// DATE DE CREATION : 2020/10/16
// OBJET : Programme test permettant d'allumer/éteindre la LED du ESP32 en continue

#include <Arduino.h>

//La LED est set à la PIN2
const int led = 2;
unsigned int compteur = 0;

void setup() {
  //Permet d'afficher "Test" dans le serial pour vérifier que le moniteur série est fonctionnel
  Serial.begin(9600);
  Serial.println("Test");
  //Configure la PIN spécifique pour qu'elle se comporte comme une sortie
  pinMode(led, OUTPUT);
}
//Fait flash la LED à chaque seconde
void loop() {
  Serial.println("Boucle : " + String(compteur));
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
  compteur++;
}