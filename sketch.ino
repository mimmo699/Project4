const int greenLEDPin = 9;
const int redLEDPIn = 11;
const int blueLEDPin = 10;

const int redSensorPin = A0;
const int greenSensorPin = A1;
const int blueSensorPin = A2;

int redSensorValue;
int greenSensorValue;
int blueSensorValue;

int green;
int red;
int blue;


void setup(){
  Serial.begin(9600);

  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPIn, OUTPUT);
  pinMode(redLEDPIn, OUTPUT);

  pinMode(redSensorPin,INPUT);
  pinMode(greenSensorPin,INPUT);
  pinMode(blueSensorPin,INPUT);
}


void loop(){
  redSensorValue = analogRead(redSensorPin);
  greenSensorValue = analogRead(greenSensorPin);
  blueSensorValue = analogRead(blueSensorPin);

  green = (greenSensorValue/4);
  red = (redSensorValue/4);
  blue = (blueSensorValue/4);

  Serial.println(green);
  Serial.println(red);
  Serial.println(blue);

  analogWrite(greenLEDPin,green);
  analogWrite(redLEDPIn,red);
  analogWrite(blueLEDPin,blue);
}

