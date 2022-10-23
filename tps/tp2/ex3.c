#include<stdio.h>

int main(){
    int n, i;
    printf("Saisir un entier");
    scanf("%d", &n);
    for (int i = 2; i < n/2 && n%i==0; i++)
    {
        printf("%d ", i);   
         }
    


}