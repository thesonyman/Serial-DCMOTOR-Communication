int input = 8;
int p = 5;
int n = 6;
int dir
void setup() {
pinMode(p,OUTPUT);
pinMode(n,OUTPUT);
pinMode(input,INPUT); 

}

void loop() {
dir = digitalRead(input);
if (dir == HIGH) {
  digitalWrite(p,HIGH);
  digitalWrite(n,LOW);
  print("forward");
else {
digitalWrite(p,LOW);
digitalWrite(n,HIGH);
print("backward");
    }
  }
}
