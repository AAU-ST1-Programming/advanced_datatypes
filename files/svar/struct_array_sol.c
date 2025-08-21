
#include <stdio.h> /* printf */
#include <math.h>  /* fmod */
struct DistanceImperial
{
    int miles;
    int yards;
    int ft;
    float in;
};

int main()
{
    struct DistanceImperial distances[3] = {{31,1000,13, 11.1}, {0,10,13, 4.1}};

    // add distances together. Note 12 inches per foot
    int miles = distances[0].miles + distances[1].miles;
    int yards = distances[0].yards + distances[1].yards;
    float inches = distances[0].in + distances[1].in;
    int feet = distances[0].ft + distances[1].ft + (int)inches / 12;
    struct DistanceImperial d = {.miles=miles, .yards=yards, .ft = feet, .in = fmod(inches, 12.0)};
    distances[2] = d;
    for (int i = 0; i < 3; i++)
    {
        d = distances[i];
        printf("distances[%i]:", i);
        printf(" %i miles", d.miles);
        printf(", %i yards", d.yards);
        printf(", %i ft", d.ft);
        printf(", %i in\n", d.in);
    }

    return 0;
}