#include <stdio.h>

int main()
{
    float value = 8123.3;
    // print value
    printf("number in variable (value) : %f\n", value);

    // Definer pointer p_value
    float *p_value;
    p_value = &value;

    // Change value using p_value
    *p_value = 100.3;

    // print value
    printf("number in variable (value) after change: %f\n", value);
    return 0;
}
