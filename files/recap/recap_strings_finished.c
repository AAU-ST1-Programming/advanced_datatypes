#include <stdio.h>
#include <strings.h>

int main()
{
    char a_string[] = "Martin"; // what is the problem here?
    char b_string[100];
    printf("values in string variable (a_string) : %s\n", a_string);

    // copy string 1
    for (int i = 0; i <= strlen(a_string); i++)
    {
        b_string[i] = a_string[i];
    }

    // copy string 2
    strcpy(b_string, a_string);

    printf("values in string variable (b_string) : %s\n", b_string);
    return 0;
}
