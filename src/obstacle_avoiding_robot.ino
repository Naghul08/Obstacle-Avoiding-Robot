const int trigPin = 9;
const int echoPin = 10;

const int leftMotor1 = 2;
const int leftMotor2 = 3;
const int rightMotor1 = 4;
const int rightMotor2 = 5;

int limit = 20;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(leftMotor1, OUTPUT);
  pinMode(leftMotor2, OUTPUT);
  pinMode(rightMotor1, OUTPUT);
  pinMode(rightMotor2, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  if (distance > limit) {
    forward();
  }
  else {
    stopMotor();
    delay(300);

    backward();
    delay(400);

    stopMotor();
    delay(200);

    right();
    delay(500);
  }

  delay(100);
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);

  int distance = duration * 0.034 / 2;

  return distance;
}

void forward() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);

  digitalWrite(rightMotor1, HIGH);
  digitalWrite(rightMotor2, LOW);
}

void backward() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, HIGH);

  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void right() {
  digitalWrite(leftMotor1, HIGH);
  digitalWrite(leftMotor2, LOW);

  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, HIGH);
}

void stopMotor() {
  digitalWrite(leftMotor1, LOW);
  digitalWrite(leftMotor2, LOW);
  digitalWrite(rightMotor1, LOW);
  digitalWrite(rightMotor2, LOW);
}
