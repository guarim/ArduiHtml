void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop() {
  if (Serial.available()) {
    String cmd = Serial.readStringUntil('\n');
    if (cmd == "R5:ON")  digitalWrite(5, HIGH);
    if (cmd == "R5:OFF") digitalWrite(5, LOW);
    if (cmd == "R7:ON")  digitalWrite(7, HIGH);
    if (cmd == "R7:OFF") digitalWrite(7, LOW);
  }
}
