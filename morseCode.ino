int led = 4;
int buzzer = 6;

void w(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    
}

void e(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
}

void l(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
}

void c(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
}

void o(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
}

void m(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
}


void y(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
}

void t(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3); 
}

void h(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
}

void a(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
}

void n(){
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(3);
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(1);
}

void lspace(){
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(3);
}

void wspace(){
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
    delay(7);
}
void setup(){
    pinMode(led, OUTPUT);
    pinMode(buzzer, OUTPUT);
    w();
    lspace();
    e();
    lspace();
    l();
    lspace();
    c();
    lspace();
    o();
    lspace();
    m();
    lspace();
    e();
    wspace();
    t();
    lspace()
    o();
    wspace();
    m();
    lspace();
    y();
    wspace();
    c();
    lspace();
    h();
    lspace();
    a();
    lspace();
    n();
    lspace();
    n();
    lspace();
    e();
    lspace();
    l();
    wspace();

}
