int LEDRED=6;
int LEDGREEN=9;
int BLINKRED;
int BLINKGREEN;
int LEDREDON;
int LEDREDOFF;
int LEDGREENON;
int LEDGREENOFF;

String message1="This is the LEDRED BLINK # ";
String message2="This is the LEDGREEN BLINK #";




void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.println("This is my number one program");
  Serial.println(" ");
  // put your setup code here, to run once:

  Serial.print("How long LEDRED should be on");
  while(Serial.available()==0) {};
  LEDREDON=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How long LEDRED should be off");
  while(Serial.available()==0) {};
  LEDREDOFF=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How long LEDGREEN should be on");
  while(Serial.available()==0) {};
  LEDGREENON=Serial.parseInt();
  Serial.println(" ");
  
  Serial.print("How long LEDGREEN should be off");
  while(Serial.available()==0) {};
  LEDREDOFF=Serial.parseInt();
  Serial.println(" ");
  
  Serial.print("How many Blinks for REDLED");
  while(Serial.available()==0) {};
  BLINKRED=Serial.parseInt();
  Serial.println(" ");

  Serial.print("How many Blinks for GREENLED");
  while(Serial.available()==0) {};
  BLINKGREEN=Serial.parseInt();
  Serial.println(" ");
}

void loop() {
  Serial.print("How many Blinks for REDLED");
  while(Serial.available()==0) {};
  BLINKRED=Serial.parseInt();
  Serial.println(" ");
  
  for(int j=1;j<=BLINKRED;j=j+1){
    Serial.print(message1);
    Serial.println(j);
    digitalWrite(LEDRED,HIGH);
    delay(LEDREDON);
    digitalWrite(LEDRED,LOW);
    delay(LEDREDOFF);
  }
  Serial.println(" ");

  for(int j=1;j<=BLINKGREEN;j=j+1){
    Serial.print(message2);
    Serial.println(j);
    digitalWrite(LEDGREEN,HIGH);
    delay(LEDGREENON);
    digitalWrite(LEDGREEN,LOW);
    delay(LEDGREENOFF);
  }
  Serial.println(" ");
    
  }

