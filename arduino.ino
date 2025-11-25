// Sorties pilotées par le navigateur
// COMMANDE REÇUE :
// 1 = allumer sortie gauche
// 2 = éteindre sortie gauche
// 3 = allumer sortie droite
// 4 = éteindre sortie droite

#define LEFT_PIN  7
#define RIGHT_PIN 8

void setup() {
  Serial.begin(9600);
  pinMode(LEFT_PIN, OUTPUT);
  pinMode(RIGHT_PIN, OUTPUT);

  digitalWrite(LEFT_PIN, LOW);
  digitalWrite(RIGHT_PIN, LOW);
}

void loop() {
  if (Serial.available()) {
    byte cmd = Serial.read();

    switch (cmd) {
      case 1: digitalWrite(LEFT_PIN, HIGH); break;
      case 2: digitalWrite(LEFT_PIN, LOW);  break;

      case 3: digitalWrite(RIGHT_PIN, HIGH); break;
      case 4: digitalWrite(RIGHT_PIN, LOW);  break;
    }
  }
}
