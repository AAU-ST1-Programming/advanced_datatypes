#include <stdio.h> /* printf */
#include <math.h>  /* sqrt */
enum Gender
{
    EVERYONE,
    MALE,
    FEMALE
};

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
    enum Gender gender;
};

int main()
{
    float mean[3][3] = {0.0};
    float std[3][3] = {0.0};
    int N, N_males, N_females;
    /* definer array af patienter*/
    struct Patient patients[7] = {
        {99, 18, 1.82, 88.0, MALE},
        {93, 35, 1.63, 69.0, FEMALE},
        {89, 25, 1.80, 75.0, MALE},
        {83, 31, 1.51, 70.0, FEMALE},
        {46, 29, 1.75, 63.0, FEMALE},
        {16, 56, 1.52, 54.0, FEMALE},
        {17, 16, 1.65, 50.0, MALE}};

    N = sizeof(patients) / sizeof(patients[0]);
    N_males = 0;
    N_females = 0;
    /* udregn gennemsnit for patienter*/

    for (int i = 0; i < N; i++)
    {
        struct Patient p = patients[i];
        mean[EVERYONE][AGE] += (float)p.age;
        mean[EVERYONE][HEIGHT] += p.heightM;
        mean[EVERYONE][WEIGHT] += p.weightKg;

        if (p.gender == MALE)
        {

            mean[MALE][AGE] += (float)p.age;
            mean[MALE][HEIGHT] += p.heightM;
            mean[MALE][WEIGHT] += p.weightKg;
            N_males++;
        }
        else
        {
            mean[FEMALE][AGE] += (float)p.age;
            mean[FEMALE][HEIGHT] += p.heightM;
            mean[FEMALE][WEIGHT] += p.weightKg;
            N_females++;
        }
    }
    for (size_t i = 0; i < 3; i++)
    {
        mean[EVERYONE][i] /= N;
        mean[MALE][i] /= N_males;
        mean[FEMALE][i] /= N_females;
    }

    /* udregn middelværdi */
    for (int i = 0; i < N; i++)
    {
        struct Patient p = patients[i];

        std[EVERYONE][AGE] += ((float)p.age - mean[EVERYONE][AGE]) * ((float)p.age - mean[EVERYONE][AGE]);
        std[EVERYONE][HEIGHT] += (p.heightM - mean[EVERYONE][HEIGHT]) * (p.heightM - mean[EVERYONE][HEIGHT]);
        std[EVERYONE][WEIGHT] += (p.weightKg - mean[EVERYONE][WEIGHT]) * (p.weightKg - mean[EVERYONE][WEIGHT]);

        if (p.gender == MALE)
        {

            std[MALE][AGE] += ((float)p.age - mean[MALE][AGE]) * ((float)p.age - mean[MALE][AGE]);
            std[MALE][HEIGHT] += (p.heightM - mean[MALE][HEIGHT]) * (p.heightM - mean[MALE][HEIGHT]);
            std[MALE][WEIGHT] += (p.weightKg - mean[MALE][WEIGHT]) * (p.weightKg - mean[MALE][WEIGHT]);
        }
        else
        {
            std[FEMALE][AGE] += ((float)p.age - mean[FEMALE][AGE]) * ((float)p.age - mean[FEMALE][AGE]);
            std[FEMALE][HEIGHT] += (p.heightM - mean[FEMALE][HEIGHT]) * (p.heightM - mean[FEMALE][HEIGHT]);
            std[FEMALE][WEIGHT] += (p.weightKg - mean[FEMALE][WEIGHT]) * (p.weightKg - mean[FEMALE][WEIGHT]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        std[EVERYONE][i] = sqrt(std[EVERYONE][i] / (N - 1));
        std[MALE][i] = sqrt(std[MALE][i] / (N_males - 1));
        std[FEMALE][i] = sqrt(std[FEMALE][i] / (N_females - 1));
    }

    /* Prints the results. */
    printf("Descriptive Table of %i Patients:\n", N);
    printf("\t\t %s (%i),\t    %s (%i),\t  %s (%i)\n", "Everyone", N, "Males", N_males, "Females", N_females);
    printf("\tAge:\t");
    printf("%5.2f (%5.2f), \t", mean[EVERYONE][AGE], std[EVERYONE][AGE]);
    printf("%5.2f (%5.2f), \t", mean[MALE][AGE], std[MALE][AGE]);
    printf("%5.2f (%5.2f) \n", mean[FEMALE][AGE], std[FEMALE][AGE]);
    printf("\tHeight:\t");
    printf("%5.2f (%5.2f), \t", mean[EVERYONE][HEIGHT], std[EVERYONE][HEIGHT]);
    printf("%5.2f (%5.2f), \t", mean[MALE][HEIGHT], std[MALE][HEIGHT]);
    printf("%5.2f (%5.2f) \n", mean[FEMALE][HEIGHT], std[FEMALE][HEIGHT]);
    printf("\tWeight:\t");
    printf("%5.2f (%5.2f), \t", mean[EVERYONE][WEIGHT], std[EVERYONE][WEIGHT]);
    printf("%5.2f (%5.2f), \t", mean[MALE][WEIGHT], std[MALE][WEIGHT]);
    printf("%5.2f (%5.2f) \n", mean[FEMALE][WEIGHT], std[FEMALE][WEIGHT]);

    return 0;
}