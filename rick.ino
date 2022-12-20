#define DO 523
#define RE 587
#define MI 659
#define FA 698
#define SOL 784
#define LA 880
#define SI 988
#define DOS 1046
#define 
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);
 
}


void play(int mils, int freq){
  analogWrite(A0, 1000);
  delay
}


void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(A0, 1000);
  delay(1);
  analogWrite(A0, 0);
  delay(1);
}
