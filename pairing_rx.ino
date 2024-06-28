#define Button_D2 2 //Arduino


void setup() {
    Serial.begin(115200);
    pinMode(Button_D2, INPUT);
}
void loop() {
    if (digitalRead(Button_D2)) {
        Serial.println("Pressed：D2");
        delay(1000);
    }
}
