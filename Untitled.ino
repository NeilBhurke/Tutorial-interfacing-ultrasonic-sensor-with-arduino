//code made by Neil Bhurke

const int Trigpin = A0; //defining the pins
const int Echopin = A1;
float duration,distance;

void setup()
{
	pinMode(Trigpin,OUTPUT);
	pinMode(Echopin,INPUT);
	Serial.begin(9600); // Set the baud rate to 9600
}

void loop()
{
	digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW); //sending a pulse trough the trigpin
 
  duration = pulseIn(echoPin, HIGH);
  distance = (duration*0.034/2); 
  delay(100);

	Serial.println(distance); // displaying the result in the serial monitor

}

	