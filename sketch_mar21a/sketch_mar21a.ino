int LEDRED=6;
int LEDGREEN=9;
int BLINKRED;
int BLINKGREEN;
int REDON;
int REDOFF;
int GREENON;
int GREENOFF;

String message="Blink number 1 is RED";
String note="Blink number 2 is GREEN";
String written="Blink number 3 is BLUE";




void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.print("This is my number one program");
  Serial.println(" ");
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(" ");
  Serial.println(message);
  digitalWrite(LEDRED,HIGH);
  delay(2000);
  digitalWrite(LEDRED,LOW);
  delay(2000);
  
  Serial.println(note);
  digitalWrite(LEDGREEN,HIGH);
  delay(2000);
  digitalWrite(LEDGREEN,LOW);
  delay(2000);
  digitalWrite(LEDGREEN,HIGH);
  delay(2000);
  digitalWrite(LEDGREEN,LOW);
  delay(2000);
  
  Serial.println(written);
  Serial.println(" ");
  digitalWrite(LEDRED,HIGH);
  delay(2000);
  digitalWrite(LEDRED,LOW);
  delay(2000);
  digitalWrite(LEDRED,HIGH);
  delay(2000);
  digitalWrite(LEDRED,LOW);
  delay(2000);
  digitalWrite(LEDRED,HIGH);
  delay(2000);
  digitalWrite(LEDRED,LOW);
  delay(2000);
  }
