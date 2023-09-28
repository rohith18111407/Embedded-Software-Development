//Motor A
const int inputPin1  = 10;    // Pin 15 of L293D IC
const int inputPin2  = 11;    // Pin 10 of L293D IC
//Motor B
const int inputPin3  = 9;   // Pin  7 of L293D IC
const int inputPin4  = 8;   // Pin  2 of L293D IC


void setup() 
{
    pinMode(inputPin1, OUTPUT);
    pinMode(inputPin2, OUTPUT);
    pinMode(inputPin3, OUTPUT);
    pinMode(inputPin4, OUTPUT);  
}

void loop() 
{
    digitalWrite(inputPin1, HIGH);
    digitalWrite(inputPin2, LOW);
    digitalWrite(inputPin3, LOW);
    digitalWrite(inputPin4, HIGH);
}
