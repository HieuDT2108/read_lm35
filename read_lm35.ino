#define TEMP_SENSOR A0  // Chân analog A0

void setup() {
    Serial.begin(9600);  // Khởi động Serial Monitor
}

void loop() {
    int sensorValue = analogRead(TEMP_SENSOR);
    float voltage = sensorValue * (5.0 / 1023.0);  // Chuyển đổi ADC thành điện áp
    float temperature = voltage * 100;  // Chuyển đổi điện áp thành độ C

    Serial.print("Nhiệt độ: ");
    Serial.print(temperature);
    Serial.println(" °C");

    delay(1000);
}
