int redPin = 7;
int yellowPin = 6;
int greenPin = 5;
int buttonPin = 2;

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);

  pinMode(buttonPin, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);
 
  // Check if the button is pressed
  if (buttonState == HIGH) {
    // If the button is pressed, turn on the green light
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  } else {
    // Otherwise, cycle through the traffic light sequence
    // Red light on, others off
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
    delay(5000); // Red light stays on for 5 seconds

    // Yellow light on, others off
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(2000); // Yellow light stays on for 2 seconds

    // Green light on, others off
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
    delay(5000); // Green light stays on for 5 seconds

    // Yellow light on before switching to red
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
    delay(2000);
  }
}