int ledPin = 13;
int val;

void setup(){
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    val = Serial.read();
    if (val != -1){
        if (val == 'H'){
            digitalWrite(ledPin, HIGH);
            delay(500);
            digitalWrite(ledPin, LOW);
            Serial.print("Available: ");
            Serial.println(Serial.available(), DEC);
        }
    }
}
