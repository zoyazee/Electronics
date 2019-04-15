int pinpot=A0;
int LEDRED=10;
int Brightness;
int delayRED;
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
  delayRED=Readvalue
  analogWrite(LEDRED,255);
  delay(delayRED);
  analogWrite(LEDRED,0);
  delay(delayRED);
  // put your main code here, to run repeatedly:

}
