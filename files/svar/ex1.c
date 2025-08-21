#include <stdio.h> /* printf */
#include <time.h>
/* struct templates */
struct Patient
{
    int id;
    int age;
    float heightM;
    float weightKg;
};


int main()
{
    struct Patient tommy = {.id=1, .age=21, .heightM=1.8, .weightKg=55.0};
    
    printf("Tommy:\n");
    printf("\tid: %i\n", tommy.id);
    printf("\tage: %i\n", tommy.age);
    printf("\theight: %.1f M\n", tommy.heightM);
    printf("\tweight: %.1f kg\n", tommy.weightKg);
    printf("%i\n", sizeof(struct tm));
    return 0;
}
