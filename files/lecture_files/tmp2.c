#include <stdio.h>

struct TempSensor
{
    int id;
    float temperature_celsius;
};

int main()
{
    int a = 3;
    float temp = 36.1;

    struct TempSensor maaling1 = {a, temp};
    printf("Measurement\n  id:%i\n  temp in celsius: %.2f\n", maaling1.id, maaling1.temperature_celsius);
    return 0;
}
