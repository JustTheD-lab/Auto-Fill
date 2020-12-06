/*
 Name:		Auto_Fill.ino
 Author:	Daniel Trakowsky aka JustTheD
*/

#define Pump 10
#define SensH 12
#define SensL 11




void setup() {
	pinMode(SensH, INPUT_PULLUP); pinMode(SensL, INPUT_PULLUP);
	pinMode(Pump, OUTPUT);
	digitalWrite(SensH, HIGH); digitalWrite(SensL, HIGH);
	digitalWrite(Pump, LOW);


}

void loop() {
  


	if(digitalRead(SensH) == HIGH) 
	{
		if (digitalRead(SensL) == HIGH) 
		{
			digitalWrite(Pump, HIGH);
			while (digitalRead (SensH)== HIGH)
			{
				
			}
			digitalWrite(Pump, LOW);
			delay(10000);
		}
	}
	

}
