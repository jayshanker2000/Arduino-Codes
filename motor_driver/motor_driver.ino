int dir = 12;
int pwm = 11;

void setup(){


  pinMode(11 , OUTPUT);
  pinMode(12 , OUTPUT);


digitalWrite(dir , LOW);
digitalWrite(pwm , LOW);



}


void loop(){

digitalWrite(dir , LOW);
analogWrite(pwm , 255);
delay(1000);
digitalWrite(dir , HIGH);
analogWrite(pwm , 255);
delay(1000);
  
}

