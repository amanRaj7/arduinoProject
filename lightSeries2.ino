int lampA = 4;
int lampB = 5;
int lampC = 6;

void setup() {
  pinMode(lampA, OUTPUT);
  pinMode(lampB, OUTPUT);
  pinMode(lampC, OUTPUT);

}

void loop() {
  digitalWrite(lampA, LOW);
  digitalWrite(lampB, HIGH);
  digitalWrite(lampC, HIGH);
  delay(1000);
  digitalWrite(lampA, HIGH);
  digitalWrite(lampB, LOW);
  digitalWrite(lampC, HIGH);
  delay(1000);
  digitalWrite(lampA, HIGH);
  digitalWrite(lampB, HIGH);
  digitalWrite(lampC, LOW);
  delay(1000);
}
