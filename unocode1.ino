#include <Servo.h>

Servo barrier;

const int trigPin = 2;
const int echoPin = 3;

const int redLED = 6;
const int greenLED = 7;

const int threshold = 20;

long duration;
int distance;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  barrier.attach(9);

  barrier.write(0);

  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);

  Serial.begin(9600);
}

void loop() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);

  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);

  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance <= threshold && distance > 0) {

    barrier.write(90);

    digitalWrite(redLED, LOW);
    digitalWrite(greenLED, HIGH);

    delay(2000);
  }

  else {

    barrier.write(0);

    digitalWrite(redLED, HIGH);
    digitalWrite(greenLED, LOW);
  }

  delay(100);
}