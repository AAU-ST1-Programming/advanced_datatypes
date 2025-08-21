#include <stdio.h>
#include <time.h>
#include <stdint.h>
int main()
{

    printf("Size of tm: %d\n", sizeof(struct tm));
    time_t epoch = 0;
    printf("%d seconds since the epoch began\n", epoch);
    printf("%s", ctime(&epoch));
}