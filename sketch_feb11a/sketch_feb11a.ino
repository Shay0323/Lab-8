int redPin = 7;
int yellowPin = 6;
int greenPin = 5;
int buttonPin = 2;

int buttonState = 0;

void setup() {
  // the code that sets everything up
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(buttonPin, INPUT);


}

void loop() {
  // this code will run repeatedly:
  buttonState = digitalRead(buttonPin);
 
  // Check if the button is pressed
  if (buttonState == HIGH) {
    // If the button is pressed, turn on the green light
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  } else {
    // cycle through the traffic light sequence
    // red light on, others off
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(5000); // Red light stays on for 5 seconds

    // yellow light on, others off
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(2000); // Yellow light stays on for 2 seconds

    // green light on, others off
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(5000); // Green light stays on for 5 seconds

    // yellow light on before switching to red
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(2000);
  }
}
