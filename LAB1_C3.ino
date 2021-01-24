

// this constant won't change:
const int  buttonPin = 2;    // the pin that the pushbutton is attached to
const unsigned long event = 3000;

// Variables will change:
int Timer = 0;  
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}


void loop() {
  Serial.println("Start...");
  
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      Timer++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(Timer);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  lastButtonState = buttonState;
  if (millis()> event){
  if (buttonState==lastButtonState) {
    if(buttonState== LOW){
      Timer--;
    }
  }

  }
}

