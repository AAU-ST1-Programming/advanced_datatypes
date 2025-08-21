#include <stdio.h>
#include <string.h>

union Data
{
    int i;
    float f;
    char str[4];
    unsigned char byte_array[4];
};

int main()
{
    union Data data;
    data.i = 10;
    data.f = -220.5;
    strcpy(data.str, "ABC");
    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);
    printf("\n(index i, data.byte_array[i]) :\n");
    for (int i = 0; i < sizeof(data); i++)
    {
        printf("(%d , 0x%02X)\n", i, data.byte_array[i]);
    }

    return 0;
}