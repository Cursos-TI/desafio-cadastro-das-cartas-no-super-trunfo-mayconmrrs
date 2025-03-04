#include <stdio.h>

int main(){
    int numsinal = 3000000000; //excede o numero limite
    unsigned int numSemsinal = 3000000000;
    int numnormal = 2147483647;
    long int numgrande = 2147483648; //excedeu 1 numero e por iso deu negativo
    long long int numdobra = 2147483648; //excedeu 1 numero e por iso deu negativo

    printf("numero com sinal: %d\n", numsinal);
    printf("numero sem sinal %u\n", numSemsinal);
    printf("Numero normal: %d\n", numnormal);
    printf("numero grande %ld\n", numgrande);
    printf("numero dobrogrande %lld\n", numdobra);

    return 0;
    }