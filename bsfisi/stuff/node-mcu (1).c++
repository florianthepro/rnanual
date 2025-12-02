void setup() {
  Serial.begin(9600);
  pinMode(D8, INPUT);
  pinMode(D7, INPUT);
}

void loop() {
  if (digitalRead(D8)) {
    Serial.println("D8 on");

  } else {
    Serial.println("D8 off");
  }
  if (digitalRead(D7)) {
    Serial.println("D7 on");

  } else {
    Serial.println("D7 off");
  }
  delay(250);
}
