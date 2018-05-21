// bt tx - arduino rx-0
// bt rx - arduino tx-1
int sensorPin = A0; // select the input pin for LDR 
int sensorValue = 0; // variable to store the value coming from the sensor 
int unit=0;
void setup() { 
Serial.begin(9600);

}
void loop() { 

sensorValue = analogRead(sensorPin); // read the value from the sensor 
//Serial.println(sensorValue); //prints the values coming from the sensor on the screen 
if(sensorValue<200){
  unit= unit+1;
  delay(1000);
}
//Serial.println(sensorValue);
Serial.print(" Units: ");

Serial.println(unit);
delay(1000); 
} 

