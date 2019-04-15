int LEDRED=9;
int LEDGREEN=5;

String message="I love electronics";

void setup() {
  Serial.begin(9600);
  pinMode(LEDRED,OUTPUT);
  pinMode(LEDGREEN,OUTPUT);
  Serial.print("This is my 2 program");
  Serial.print(" ");
  

}

void loop() {
  
  for(int j=1;j<=BLINKRED;j=j+1){
    Serial.println (message);
    Serial.print(" ");
    Serial.print(j);
    Serial.print(" ");
    
     
  digitalWrite(LEDRED,HIGH);
  delay(1000);
  digitalWrite(LEDRED,LOW);
  delay(1000);}
  
  for(int j=1;j<=BLINKGREEN;j=j+1){
  digitalWrite(LEDGREEN,HIGH);
  delay(1000);
  digitalWrite(LEDGREEN,LOW);
  delay(1000);}
}
