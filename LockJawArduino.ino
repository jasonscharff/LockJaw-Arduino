
const int pressureSensor = A0;
const int lockThreshold = 10;
bool isLocked = false;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(pressureSensor));
}

void lock() {
  
}

