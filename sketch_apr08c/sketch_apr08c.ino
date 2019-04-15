int pinpot=A0;
int LEDRED=10;
int Brightness;
int Readvalue;


String message="pinpot value=";
String message2="Brightness=";

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
  pinMode(LEDRED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=analogRead(pinpot);
  Serial.print(message);
  Serial.print(Readvalue);
  Serial.print(message2);
  Serial.println(Brightness);
  Brightness=(255./1023.)*Readvalue;
  analogWrite(LEDRED,Brightness);
  delay(1000);
  analogWrite(LEDRED,0);
  delay(1000);
  // put your main code here, to run repeatedly:

}
