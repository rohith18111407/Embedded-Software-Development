int IRSensor = A0; // connect ir sensor to arduino pin 2
int buzzer=8;//connect positive terminal of buzzer to pin 8, negative terminal to ground


void setup() 
{


 Serial.begin(9600); //initialise serial monitor
 pinMode(IRSensor, INPUT);
  pinMode(buzzer, OUTPUT);
 
}

void loop()
{ 
  int statusSensor = analogRead (IRSensor);
          //display output on serial monitor
 
 Serial.println(statusSensor);

 if (statusSensor<200)
  {
    tone(8, 240);
    delay(1000);
    tone(8, 270);
    delay(1000);
    tone(8, 300);
    delay(1000);
    tone(8, 320);
    delay(1000);
    tone(8, 360);
    delay(1000);
    tone(8, 400);
    delay(1000);
    tone(8, 450);
    delay(1000);
    tone(8, 480);
    delay(1000);
    
  } 
  else 
  noTone(8);
}
