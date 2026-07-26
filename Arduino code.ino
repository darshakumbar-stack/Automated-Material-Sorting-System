#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

Servo servo;
Servo MYservo;

int metalPin = 2;        // Digital pin for metal sensor
int nonmetalPin = 3;     // Digital pin for non-metal sensor
int servoPin = 9;        // Digital pin for servo

int metalCount = 0;      // Counter for metal objects
int nonmetalCount = 0;   // Counter for non-metal objects

void setup()
{
    lcd.backlight();
    lcd.begin(16, 2);

    pinMode(metalPin, INPUT);
    pinMode(nonmetalPin, INPUT);

    servo.attach(servoPin);
}

void loop()
{
    int metalState = digitalRead(metalPin);
    int nonmetalState = digitalRead(nonmetalPin);

    // Metal object detected
    if (metalState == HIGH)
    {
        metalCount++;
        delay(300);          // Debounce delay

        servo.write(90);
        delay(50);

        servo.write(180);
        delay(500);

        servo.write(90);
        delay(500);
    }

    // Non-metal object detected
    if (nonmetalState == HIGH)
    {
        nonmetalCount++;
        delay(500);          // Debounce delay
        delay(300);
    }

    // Display counts on LCD
    lcd.clear();

    lcd.setCursor(0, 0);
    lcd.print("Metal: ");
    lcd.print(metalCount);

    lcd.setCursor(0, 1);
    lcd.print("Non-metal: ");
    lcd.print(nonmetalCount);

    delay(100);
}
