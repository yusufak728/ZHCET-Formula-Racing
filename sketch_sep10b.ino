// C++ code
int E=6;
int D=5;
int C=4;
int B=8;
int A=7;
int G=3;
int F=2;
int DP=10;

void zero ()
{
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(F,LOW);
}
void one ()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(F,HIGH);
}
void two ()
{
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,HIGH);
}
void setup()
{
  pinMode(E, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(DP, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(A, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(F, OUTPUT);
  
}
void three()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,HIGH);
}
void four()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(F,LOW);
}
void five ()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,LOW);
}
void six()
{
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,LOW);
}
void seven()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(F,HIGH);
}
void eight()
{
  digitalWrite(E,LOW);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,LOW);
}
void nine()
{
  digitalWrite(E,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(C,LOW);
  digitalWrite(DP,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(A,LOW);
  digitalWrite(G,LOW);
  digitalWrite(F,LOW);
}
void loop()
{
  zero();
  delay(1000);
  one();
  delay(1000);
  two();
  delay(1000);
    three();
  delay(1000);
      four();
  delay(1000);
    five();
  delay(1000);
  six();
  delay(1000);
  seven();
  delay(1000);
  eight();
  delay(1000);
  nine();
  delay(1000);
}
