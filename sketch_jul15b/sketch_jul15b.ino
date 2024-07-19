#define ENABLE 5
#define DIRA 5
#define DIRB 4
#define LED_PIN 6

void setup() 
  {
    // put your setup code here, to run once:
    pinMode(ENABLE, OUTPUT);
    pinMode(DIRA, OUTPUT);
    pinMode(DIRB, OUTPUT);
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
  }

void loop() 
  {
    Serial.println("One way for 5 seconds, stop for 3 seconds, Reverse for 5 seconds");

    digitalWrite(ENABLE, HIGH); // Enable the motor
    digitalWrite(DIRA, HIGH); // Spin in Direction A
    digitalWrite(DIRB, LOW); // Prevent spinning in direction B
    digitalWrite(LED_PIN, HIGH); // Turn on the LED

    delay(5000); // Delay execution for 5000ms

    // Stop fan and delay execution for 3 seconds
    digitalWrite(ENABLE, LOW); // Stop the fan and LED for 3 seconds
    digitalWrite(LED_PIN, LOW); // Turn off the LED  
    delay(3000); // Delay execution for 3000ms

    // Spin the fan the other direction for 5 seconds
    digitalWrite(ENABLE, HIGH); // Enable the motor
    digitalWrite(DIRB, HIGH); // Spin in Direction A
    digitalWrite(DIRA, LOW); // Prevent spinning in direction B
    digitalWrite(LED_PIN, HIGH); // Turn on the LED

    // Stop dan and delay execution for 3 seconds
    digitalWrite(ENABLE, LOW); // Stop the fan and LED for 3 seconds
    digitalWrite(LED_PIN, LOW); // Turn off the LED  
    delay(3000); // Delay execution for 3000ms


  } // Loop
