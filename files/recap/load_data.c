#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    float *data;
    int capacity = 10; // initial capacity
    int size = 0;
    float value;

    char filename[] = "data.csv";

    file = fopen(filename, "r");
    if (!file)
    {
        perror("Error opening file");
        return 1;
    }

    data = malloc(capacity * sizeof(float));
    if (!data)
    {
        perror("Memory allocation failed");
        fclose(file);
        return 1;
    }

    while (fscanf(file, "%f", &value) == 1)
    {
        if (size >= capacity)
        {
            capacity *= 2;
            float *temp = realloc(data, capacity * sizeof(float));
            if (!temp) // if temp == NULL, memory allocation failed
            {
                perror("Memory reallocation failed");
                free(data);
                fclose(file);
                return 1;
            }
            data = temp;
        }
        data[size++] = value;
    }

    fclose(file);

    // Print the loaded data
    printf("Loaded %i floats:\n", size);
    for (int i = 0; i < size; ++i)
    {
        printf("%.2f\n", data[i]);
    }

    free(data);
    return 0;
}