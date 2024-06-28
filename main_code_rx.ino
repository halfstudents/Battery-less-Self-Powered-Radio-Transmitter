#define Button_D2 2//Arduino
#define Button_D3 3//Arduino
#define Button_D4 4//Arduino
#define Button_D5 5//Arduino

void setup() {
  Serial.begin(115200);
  pinMode(Button_D2, INPUT);
  pinMode(Button_D3, INPUT);
  pinMode(Button_D4, INPUT);
  pinMode(Button_D5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}
void loop() {
  if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:0");
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(500);
  }
    if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:1");
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(500);
  }
    if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:2");
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(500);
  }
     if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:4");
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(500);
  }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:8");
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(500);
  }
    if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:3");
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    delay(500);
  }
     if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:5");
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(500);
     }
    if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:6");
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(500);
     }
    if (((digitalRead(Button_D5)==0) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:7");
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    delay(500);
     }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:9");
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(500);
     }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:10");
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(500);
     }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==0) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:11");
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    delay(500);
     }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:12");
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
     }

     if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==0)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:13");
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
     }
     if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==0))) {
    Serial.println("State:14");
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
     }
    if (((digitalRead(Button_D5)==1) && (digitalRead(Button_D4)==1) && (digitalRead(Button_D3)==1)&& (digitalRead(Button_D2)==1))) {
    Serial.println("State:15");
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    delay(500);
     }
   
  delay(100);
}
