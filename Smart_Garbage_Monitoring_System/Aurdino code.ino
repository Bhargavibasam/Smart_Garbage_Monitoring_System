#include <Servo.h>
Servo myservo;

const int ir = D7;
const int servo = D3;
const int trigpin = D5;
const int echopin = D6;
const int buzzer = D0;

void setup() {
  pinMode(ir, INPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(buzzer, OUTPUT);
  myservo.attach(servo);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  
  int duration = pulseIn(echopin, HIGH);
  int distance = duration * 0.034 / 2;
  int a = digitalRead(ir);

  Serial.print("distance: ");
  Serial.println(distance);

  if (distance <= 10) {
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(buzzer, LOW);
  }

  if (a == 1) {
    myservo.write(0);
    delay(1000);
  } else {
    myservo.write(90);
    delay(1000);
  }
}
