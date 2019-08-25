int ledRed1 = 12;
int ledYellow1 = 11;
int ledGreen1 = 10;

int ledRed2 = 9;
int ledYellow2 = 8;
int ledGreen2 = 7;

int ledRed3 = 6;
int ledYellow3 = 5;
int ledGreen3 = 4;

void setup() {
  // put your setup code here, to run once:
    pinMode(ledRed1, OUTPUT);
    pinMode(ledYellow1, OUTPUT);
    pinMode(ledGreen1, OUTPUT);
    
    pinMode(ledRed2, OUTPUT);
    pinMode(ledYellow2, OUTPUT);
    pinMode(ledGreen2, OUTPUT);
    
    pinMode(ledRed3, OUTPUT);
    pinMode(ledYellow3, OUTPUT);
    pinMode(ledGreen3, OUTPUT);
    
    
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledYellow1, HIGH);
    digitalWrite(ledGreen1, HIGH);
    
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledYellow2, HIGH);
    digitalWrite(ledGreen2, HIGH);
    
    digitalWrite(ledRed3, HIGH);
    digitalWrite(ledYellow3, HIGH);
    digitalWrite(ledGreen3, HIGH);
    delay(3000);

}

void loop() {
  // put your main code here, to run repeatedly:
  
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen1, HIGH);
    
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledYellow2, LOW);
    digitalWrite(ledGreen2, LOW);
    
    digitalWrite(ledRed3, HIGH);
    digitalWrite(ledYellow3, LOW);
    digitalWrite(ledGreen3, LOW);
    delay(10000);
    

    digitalWrite(ledRed1, LOW);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen1, HIGH);
    
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledYellow2, HIGH);
    digitalWrite(ledGreen2, LOW);
    
    digitalWrite(ledRed3, HIGH);
    digitalWrite(ledYellow3, LOW);
    digitalWrite(ledGreen3, LOW);
    delay(5000);


    
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen1, LOW);
    
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledYellow2, LOW);
    digitalWrite(ledGreen2, HIGH);
    
    digitalWrite(ledRed3, HIGH);
    digitalWrite(ledYellow3, LOW);
    digitalWrite(ledGreen3, LOW);
    delay(10000);


    
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen1, LOW);
    
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledYellow2, LOW);
    digitalWrite(ledGreen2, HIGH);
    
    digitalWrite(ledRed3, LOW);
    digitalWrite(ledYellow3, HIGH);
    digitalWrite(ledGreen3, LOW);
    delay(5000);


    
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledYellow1, LOW);
    digitalWrite(ledGreen1, LOW);
    
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledYellow2, LOW);
    digitalWrite(ledGreen2, LOW);
    
    digitalWrite(ledRed3, LOW);
    digitalWrite(ledYellow3, LOW);
    digitalWrite(ledGreen3, HIGH);
    delay(10000);


    
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledYellow1,HIGH);
    digitalWrite(ledGreen1, LOW);
    
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledYellow2, LOW);
    digitalWrite(ledGreen2, LOW);
    
    digitalWrite(ledRed3, LOW);
    digitalWrite(ledYellow3, LOW);
    digitalWrite(ledGreen3, HIGH);
    delay(5000);

}
