#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef unsigned int rotateType;

int ror(rotateType n, unsigned int ror){
    char temp = 0;
    if(n % 2 == 1){
        temp = 1;
    }
    n = n >> ror;
    if(temp){
        n += pow(2, sizeof(n) * 8) / 2;
    }
    return n;
}

int rol(rotateType n, unsigned int rol){
    char temp = 0;
    if(n > pow(2, sizeof(n) * 8) / 2){
        temp = 1;
    }
    n = n << rol;
    n += temp;
    return n;
}

int main() {
    unsigned int x = 2;
    printf("%u, %u\n", x, rol(x, 1));
    printf("%u, %u\n",x , ror(x, 1));
}