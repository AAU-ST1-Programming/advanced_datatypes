#include <stdio.h>
#include <strings.h>

int main()
{
    int N = 10;
    float arr1[N];
    float arr2[N];
    for (int i = 0; i < N; i++)
    {
        arr1[i] = (float)i * i * 0.13;
    }

    printf("arr1: ");
    for (int i = 0; i < N; i++)
    {
        printf("%.2f, ", arr1[i]);
    }
    printf("\n");

    // copy array1 (element by element)

    // copy array2 (memory copy, aaah so easy.. damn I hope this works!)
    memcpy(arr2, arr1, N * sizeof(float));

    printf("arr2 ");
    for (int i = 0; i < N; i++)
    {
        printf("%.2f, ", arr2[i]);
    }
    return 0;
}
