#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04
int buzzer=8;//connect positive terminal of buzzer to pin 8, negative terminal to ground
// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
  Serial.begin(9600); //initialise serial monitor
  pinMode(buzzer, OUTPUT);
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  int statusSensor = distance;
          //display output on serial monitor
 
 Serial.println(statusSensor);

 if (statusSensor<100)
  {
    // Sounds the buzzer at the frequency relative to the note C in Hz
    tone(buzzer,261);    
    // Waits some time to turn off
    delay(200);
    //Turns the buzzer off
    tone(buzzer,293);             
    delay(200);    
    tone(buzzer,329);      
    delay(200);
    tone(buzzer,349);    
    delay(200);  
    tone(buzzer,392);            
    delay(200);
  } 
  else 
  noTone(8);
}
