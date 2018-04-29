int startPin = 6;
int endPin = 11;

void style_1(){
    for (int i = startPin; i <= endPin; ++i){
        digitalWrite(i, HIGH);
        delay(200);
    }
    for (int i = endPin; i >= startPin; --i){
        digitalWrite(i, LOW);
        delay(200);
    }
}

void setup(){
    for (int i = startPin; i <= endPin; ++i){
        pinMode(i, OUTPUT);
    }
}

void loop(){
    style_1();
}
