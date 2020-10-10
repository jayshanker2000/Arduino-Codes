const int ProxSensor=2;

void setup() { 
  Serial.begin(9600);               
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(13, OUTPUT);     
  //Pin 2 is connected to the output of proximity sensor
  pinMode(A2,INPUT);
}

void loop() {
  int i;
  i = analogRead(A2);
  Serial.println(i);
  
  delay(100);              // wait for a second
}
