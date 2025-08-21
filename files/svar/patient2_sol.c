#include <stdio.h> /* printf */
#include <math.h>  /* sqrt */

enum Discriptives
{
    AGE,
    HEIGHT,
    WEIGHT
};
struct Patient
{ // typedef struct { ... } identifier_key;
    /* Data structure */
    int id;
    int age;
    float heightM;
    float weightKg;
};

int main()
{
    float mean[3] = {0.0};
    float std[3] = {0.0};
    int N;
    /* definer array af patienter*/
    struct Patient patients[7] = {
        {99, 18, 1.82, 88.0},
        {93, 35, 1.63, 69.0},
        {89, 25, 1.80, 75.0},
        {83, 31, 1.51, 70.0},
        {46, 29, 1.75, 63.0},
        {16, 56, 1.52, 54.0},
        {17, 16, 1.65, 50.0}};

    N = sizeof(patients) / sizeof(patients[0]);

    /* udregn gennemsnit for patienter*/
    for (int i = 0; i < N; i++)
    {
        struct Patient p = patients[i];
        mean[AGE] += (float)p.age;
        mean[HEIGHT] += p.heightM;
        mean[WEIGHT] += p.weightKg;
    }
    mean[AGE] /= N;
    mean[HEIGHT] /= N;
    mean[WEIGHT] /= N;

    /* udregn middelværdi */
    for (int i = 0; i < N; i++)
    {
        struct Patient p = patients[i];
        std[AGE] += ((float)p.age - mean[AGE]) * ((float)p.age - mean[AGE]);
        std[HEIGHT] += (p.heightM - mean[HEIGHT]) * (p.heightM - mean[HEIGHT]);
        std[WEIGHT] += (p.weightKg - mean[WEIGHT]) * (p.weightKg - mean[WEIGHT]);
    }

    std[AGE] = sqrt(std[AGE] / (N - 1));
    std[HEIGHT] = sqrt(std[HEIGHT] / (N - 1));
    std[WEIGHT] = sqrt(std[WEIGHT] / (N - 1));

    /* Prints the results. */
    printf("Descriptive Table of %i Patients:\n", N);
    printf("\tAge: %.2f (%.2f)\n", mean[AGE], std[AGE]);
    printf("\tHeight: %.2f (%.2f)\n", mean[HEIGHT], std[HEIGHT]);
    printf("\tWeight: %.2f (%.2f)\n", mean[WEIGHT], std[WEIGHT]);

    return 0;
}