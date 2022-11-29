int lr= 13;
int lb= 12;
int lg= 11;
void setup() {
  pinMode(lr, OUTPUT);
  pinMode(lg, OUTPUT);
  pinMode(lb, OUTPUT);
}
void loop() {
  //analogWrite(lr,255);  // Red
  //analogWrite(lg,0);
  //analogWrite(lb,0);
  //delay(1000);
  
  //analogWrite(lg,255); // Green
  //analogWrite(lr,0);
  //analogWrite(lb,0);
  //delay(1000);
  
  //analogWrite(lb,255); // Blue
  //analogWrite(lg,0);
  //analogWrite(lr,0);
  //delay(1000);
  
  //analogWrite(lb,255); // yellow
  //analogWrite(lg,255);
  //analogWrite(lr,255);
  //delay(1000);
  
  //analogWrite(lb,150); // Blue
  //analogWrite(lg,10);
  //analogWrite(lr,10);
  //delay(1000);
  
  analogWrite(lb,200); // Blue
  analogWrite(lg,100);
  analogWrite(lr,100);
  delay(1000);
  
  
}