#include <Servo.h>

Servo myServo;  // Tạo đối tượng Servo

void setup() {
    myServo.attach(9); // Kết nối servo vào chân 9
}

void loop() {
    myServo.write(0);   // Góc 0 độ
    delay(1000);
    myServo.write(90);  // Góc 90 độ
    delay(1000);
    myServo.write(180); // Góc 180 độ
    delay(1000);
}
