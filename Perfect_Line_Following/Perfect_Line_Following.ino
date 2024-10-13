int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;
int middle = 8;
int middleright = 7;
int right = 6;
int middleleft = 9;
int left = 10;


void setup() {
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(middle, INPUT);
  pinMode(middleleft, INPUT);
  pinMode(left, INPUT);
  pinMode(middleright, INPUT);
  pinMode(right, INPUT);
  Serial.begin(9600);

}

void loop() {
  if (digitalRead(right) == true){
    Serial.println("right");
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);

    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  }
    else if (digitalRead(left) == true){
    Serial.println("left");
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);

    digitalWrite(motor2pin1, HIGH);
    digitalWrite(motor2pin2, LOW);
  }
  else if (digitalRead(middleright) == true){
    Serial.println("right");
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);

    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  }

  else if (digitalRead(middleleft) == true){
    Serial.println("left");
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);

    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, LOW);
  }
  else if (digitalRead(middle) == true){
    Serial.println("left");
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, HIGH);

    digitalWrite(motor2pin1, LOW);
    digitalWrite(motor2pin2, HIGH);
  }
 
}