int analogPin = A0;
int val = 0;
void setup(){
    Serial.begin(9600);
}

void loop(){
    val = analogRead(analogPin);
    Serial.println(val * (5.0 / 1024.0));
    delay(100);
}
