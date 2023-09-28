//Motor A
const int inputPin1  = 10;    // Pin 15 of L293D IC
const int inputPin2  = 11;    // Pin 10 of L293D IC
//Motor B
const int inputPin3  = 8;   // Pin  7 of L293D IC
const int inputPin4  = 9;   // Pin  2 of L293D IC
#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement


void setup() 
{
    pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
    
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
}

void loop() 
{
//  digitalWrite(inputPin1, HIGH);
//    digitalWrite(inputPin2, LOW);
//    digitalWrite(inputPin3, LOW);
//    digitalWrite(inputPin4, HIGH);
//    return;
    // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

    if(distance < 10)
    {
      digitalWrite(inputPin1, LOW);
      digitalWrite(inputPin2, HIGH);
      digitalWrite(inputPin3, HIGH);
      digitalWrite(inputPin4, LOW);
  }
  else
  {
    digitalWrite(inputPin1, LOW);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, LOW);
    digitalWrite(inputPin4, HIGH);
  }
}
