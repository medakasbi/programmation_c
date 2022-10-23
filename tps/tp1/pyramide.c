#include <stdio.h>

int main(){
    char caractere;
    scanf("%c",&caractere);
    printf("++++%c++++\n", caractere);
    printf("+++%c%c%c+++\n", caractere, caractere, caractere);
    printf("++%c%c%c%c%c++\n", caractere, caractere, caractere,caractere,caractere);
    printf("+%c%c%c%c%c%c%c+\n", caractere, caractere, caractere, caractere, caractere, caractere, caractere);
    printf("%c%c%c%c%c%c%c%c%c\n", caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere, caractere);
    return 0;
}