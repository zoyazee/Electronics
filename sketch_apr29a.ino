int LEDGREEN=9;
int PIR=5;
int Readvalue;
void setup() {
  pinMode(PIR,INPUT);
  pinMode(LEDGREEN,OUTPUT);
  
  // put your setup code here, to run once:

}

void loop() {
  Readvalue=digitalRead(PIR);
  if(Readvalue==HIGH)
  {digitalWrite(LEDGREEN,HIGH);
  }
  else{
    digitalWrite(LEDGREEN,LOW);
    }
  
  // put your main code here, to run repeatedly:

}
