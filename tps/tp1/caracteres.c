#include <stdio.h>
int main(){
    char lettre, lettre1 = 'a', lettre2 = 'b', lettre3 = 'c';

    printf("lettre vaut %c\n", lettre1);
    printf("%c%c%c du langage C.\n", lettre1, lettre2, lettre3);
    scanf("%c", &lettre);
    printf("J'ai lu la lettre %c.\n", lettre);

    return 0;
}