
const int clk1 = 11;

int val1;

void setup() {
pinMode(4, INPUT); // Sets the trigPin as an Output

pinMode(clk1, OUTPUT);

Serial.begin(9600); 

//pinMode(d,OUTPUT);
//digitalWrite(d,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(clk1,LOW);
delay(150);
delay(150);
digitalWrite(clk1,HIGH);
delay(300);
}
