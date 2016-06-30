
void setup() {
  int input = 8;
  int p = 5;
  int n = 6;
  pinMode(p,OUTPUT);
  pinMode(n,OUTPUT);
  pinMode(input,INPUT); 

}

void loop() {
    int input = 8;
    int dir = digitalRead(input);
    int p = 5;
    int n = 6;
    if (dir == HIGH) {
      digitalWrite(p,HIGH);
      digitalWrite(n,LOW);
      printf("forward");
    }
    else {
    digitalWrite(p,LOW);
    digitalWrite(n,HIGH);
    printf("backward");
    }
}
