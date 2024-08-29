// C++ code
//
int sensorvalue = 0;

void setup()
{
  pinMode(5, INPUT);
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  sensorvalue = digitalRead(5);
  Serial.println(sensorvalue);
  if (sensorvalue == 1) {
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
  } else {
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}