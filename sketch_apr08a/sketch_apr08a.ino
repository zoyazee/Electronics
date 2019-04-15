int pinpot=A0;
int Readvalue;
int BLINKGREEN;

void setup() {
  Serial.begin(9600);
  pinMode(pinpot,INPUT);
}

void loop() {
  Readvalue=analogRead(pinpot);
  Serial.println(Readvalue);

}

