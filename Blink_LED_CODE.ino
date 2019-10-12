
//Project By CT World
//Like and subscribe

int led_Pin = 13;

//the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin led_Pin as an output.
  pinMode(led_Pin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_Pin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
