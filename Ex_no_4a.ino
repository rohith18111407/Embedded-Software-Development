int IRSensor = A0; // connect IR sensor AO to arduino analog pin A0
int LED = 13; // connect Led to arduino pin 9

void setup() 
{
  int IRSensor = A0;
  Serial.begin(9600); //initialise serial monitor
  
  pinMode (LED, OUTPUT); // Led pin OUTPUT
}

void loop()
{
  int statusSensor = analogRead (IRSensor);
  Serial.println(statusSensor);         //display output on serial monitor

  if(statusSensor<100)
    digitalWrite(LED,HIGH);        //if light is not present,LED on
  else
    digitalWrite(LED,LOW);         //if light is present,LED off
   
}
