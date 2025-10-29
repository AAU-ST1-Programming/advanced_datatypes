#include <stdio.h>

typedef struct {
    int id;
    float temperature;
} TempSensor;

int main() {
    TempSensor sensor;

    sensor.id = 1;
    sensor.temperature = 36.7;

    printf("Sensor ID: %d\n", sensor.id);
    printf("Temperatur: %.1f °C\n", sensor.temperature);

    return 0;
}