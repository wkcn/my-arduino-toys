const byte LED = 3;
const byte cds = A5;
void setup(){
    pinMode(LED, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    int val = analogRead(cds); 
    Serial.println(val);
    if (val >= 512)digitalWrite(LED, HIGH);
    else digitalWrite(LED, LOW);
    delay(200);
}
