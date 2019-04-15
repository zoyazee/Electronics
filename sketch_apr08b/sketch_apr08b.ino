int LEDRED=10;
void setup() {
  pinMode(LEDRED,OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  analogWrite(LEDRED,128);
  delay(1000);
  analogWrite(LEDRED,0);
  delay(1000);
  // put your main code here, to run repeatedly:

}
