#include <stdio.h> /* printf */
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
    struct Patient tommy = {1, 21, 1.8, 55.0};
    /* Prints the results. */
    printf("Patient information for Tommy\n");
    printf("\tID: %i\n", tommy.id);
    printf("\tAge: %i\n", tommy.age);
    printf("\tHeight: %.2f\n", tommy.heightM);
    printf("\tWeight: %.1f\n", tommy.weightKg);

    return 0;
}