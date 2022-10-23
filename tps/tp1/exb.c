#include <stdio.h>

int main(){

int a; 

printf("Veuillez saisir un nombre .\n");
scanf("%d", &a);

if(a%2){
    printf("%d est un nombre impaire.\n", a);
}else{
    printf("%d est un nombre paire.\n", a);
}
}