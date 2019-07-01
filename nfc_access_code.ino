#include <SPI.h>
#include <MFRC522.h>

#include <Servo.h>
Servo servopin;
int Redled = 7;
int Greenled = 10;
int numblink;
 
#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.
 
void setup() 
{
  Serial.begin(9600);   // Initiate a serial communication
  SPI.begin();      // Initiate  SPI bus
  mfrc522.PCD_Init();   // Initiate MFRC522
  Serial.print("How many blinks do you want");
  while(Serial.available()==0) ();
  numblink = Serial.parseInt();
  Serial.println(" ");
  Serial.println("Please tap your card...");
  Serial.println();
  servopin.attach(5);
  pinMode(Redled,OUTPUT);
  pinMode(Greenled,OUTPUT);

}
void loop() 
{
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent()) 
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial()) 
  {
    return;
  }
  //Show UID on serial monitor
  Serial.print("UID tag :");
  String content= "";
  byte letter;
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {
     Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
     Serial.print(mfrc522.uid.uidByte[i], HEX);
     content.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
     content.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Message : ");
  content.toUpperCase();
  if (content.substring(1) == "10 6A BB 4F") //change here the UID of the card/cards that you want to give access
  {
    for(int j=1,j<=1numblink,j+1) {
      digitalWrite(Redled,HIGH);
      delay(1000);
      digitalWrite(Redled,LOW);
      delay(1000);
    }
    Serial.println("Processing your request");
    Serial.println();
    delay(3000);
     servopin.write(90);
     servopin.write(0);
  }
 
 else   {
    Serial.println(" Insufficient balance");
    delay(3000);
  }

  if (content.substring(1) == "89 3C 30 5B") //change here the UID of the card/cards that you want to give access
  {
    for(int j=1,j<=numblink,j+1) {
      digitalWrite(Greenled,HIGH);
      delay(1000);
      digitalWrite(Greenled,LOW);
      delay(1000);
    }
    Serial.println("Processing your request");
    Serial.println();
    delay(3000);
     servopin.write(90);
     servopin.write(0);
  }
 
 else   {
    Serial.println(" Insufficient balance");
    delay(3000);
  }
  
 
} 
