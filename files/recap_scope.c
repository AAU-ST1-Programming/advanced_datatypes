#include <stdio.h>

int main(){
    int modval = 16;
    int index;

    for (int index = 0; index < 10; index++){
        printf("modulus(%i,%i)=%i\n",index, modval, index%16);
    }
    
    printf("index er nu : %i", index);
    return 0;
}
