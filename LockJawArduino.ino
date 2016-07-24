
const int pressureSensor = A0;
bool isLocked = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(pressureSensor));
}
