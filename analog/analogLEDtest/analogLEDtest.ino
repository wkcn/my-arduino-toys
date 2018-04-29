int ledPin = 5;
int analogPin = A0;
int val = 0;

void setup(){
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
}

void loop(){
    val = analogRead(analogPin);
    analogWrite(ledPin, val / 4);
    Serial.println(val);
    delay(200);
}
