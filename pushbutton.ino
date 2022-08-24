// Variables will change:
int e=6;
int d=5;
int c=4;
int b=8;
int a=7;
int g=3;
int f=2;
int buttonPin=1;
bool bPress;
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // put your setup code here, to run once:
  pinMode(a, OUTPUT);  //A
  pinMode(b, OUTPUT);  //B
  pinMode(c, OUTPUT);  //C
  pinMode(d, OUTPUT);  //D
  pinMode(e, OUTPUT);  //E
  pinMode(f, OUTPUT);  //F
  pinMode(g, OUTPUT);  //G

  pinMode( buttonPin , INPUT_PULLUP );
  Serial.begin(9600);
  displayDigit(buttonPushCounter);
}

void loop() {

   buttonState = digitalRead(buttonPin);

   // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is LOW then the button went from off to on:
      bPress = true;
      buttonPushCounter++;
      if( buttonPushCounter > 9) buttonPushCounter =0 ;
      Serial.println("on");
    
    } else {
      // if the current state is HIGH then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;

  if( bPress ){
     turnOff();
     displayDigit(buttonPushCounter);
  }


}



void displayDigit(int digit)
{
 //Conditions for displaying segment a
 if(digit!=1 && digit != 4)
 digitalWrite(a,LOW);

 //Conditions for displaying segment b
 if(digit != 5 && digit != 6)
 digitalWrite(b,LOW);

 //Conditions for displaying segment c
 if(digit !=2)
 digitalWrite(c,LOW);

 //Conditions for displaying segment d
 if(digit != 1 && digit !=4 && digit !=7)
 digitalWrite(f,LOW);

 //Conditions for displaying segment e
 if(digit == 2 || digit ==6 || digit == 8 || digit==0)
 digitalWrite(e,LOW);

 //Conditions for displaying segment f
 if(digit != 1 && digit !=2 && digit!=3 && digit !=7)
 digitalWrite(d,LOW);

 //Conditions for displaying segment g
 if (digit!=0 && digit!=1 && digit !=7)
 digitalWrite(g,LOW);

}
void turnOff()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
