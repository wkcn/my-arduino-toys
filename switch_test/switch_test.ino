const byte LED = 3;
const byte SW = 2;
void setup(){
    pinMode(LED, OUTPUT);
    pinMode(SW, INPUT);
}

void loop(){
    boolean val = digitalRead(SW);
    if (val)digitalWrite(LED, HIGH);
    else digitalWrite(LED, LOW);
}
