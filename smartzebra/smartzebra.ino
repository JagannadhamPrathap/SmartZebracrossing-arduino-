#include <Servo.h>

#define GREEN_LED_PIN 2
#define RED_LED_PIN 3
#define MOTOR1_PIN1 6
#define MOTOR1_PIN2 7
#define MOTOR2_PIN1 8
#define MOTOR2_PIN2 10

Servo myservo;

// Define servo positions
#define SERVO_UP 90
#define SERVO_DOWN 0

// Define motor speeds
#define MOTOR_SPEED 200 // Adjust speed as per your requirements

void setup() {
    // Set pin modes
    myservo.attach(9);
    
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(MOTOR1_PIN1, OUTPUT);
    pinMode(MOTOR1_PIN2, OUTPUT);
    pinMode(MOTOR2_PIN1, OUTPUT);
    pinMode(MOTOR2_PIN2, OUTPUT);

    // Initially, keep servo up and turn off LEDs
    digitalWrite(GREEN_LED_PIN, LOW);
    digitalWrite(RED_LED_PIN, LOW);
    myservo.write(0);

    // Stop motors initially
    digitalWrite(MOTOR1_PIN1, LOW);
    digitalWrite(MOTOR1_PIN2, LOW);
    digitalWrite(MOTOR2_PIN1, LOW);
    digitalWrite(MOTOR2_PIN2, LOW);
}

void loop() {
    digitalWrite(RED_LED_PIN, HIGH);
    digitalWrite(GREEN_LED_PIN, LOW);
    myservo.write(90);

    digitalWrite(MOTOR1_PIN1, HIGH);
    digitalWrite(MOTOR1_PIN2, LOW);
    digitalWrite(MOTOR2_PIN1, HIGH);
    digitalWrite(MOTOR2_PIN2, LOW);

    delay(500); // Delay for stability

    myservo.write(90);
    delay(1000); // Adjust delay as per your servo motor

    digitalWrite(GREEN_LED_PIN, HIGH);
    digitalWrite(RED_LED_PIN, LOW);

    myservo.write(0);
    delay(1000); // Adjust delay as per your servo motor

    digitalWrite(RED_LED_PIN, LOW);
    digitalWrite(GREEN_LED_PIN, LOW);
    
    digitalWrite(MOTOR1_PIN1, LOW);
    digitalWrite(MOTOR1_PIN2, LOW);
    digitalWrite(MOTOR2_PIN1, LOW);
    digitalWrite(MOTOR2_PIN2, LOW);

    delay(5000); // Adjust delay as per your requirements
}
