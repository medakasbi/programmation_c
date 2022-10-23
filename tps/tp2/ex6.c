#include<stdio.h>

int main(){
    int n, i, som=0;
    printf("Saisir un entier ");
    scanf("%d",&n);


    for ( i = 1; i < n/2 + 1; i++)
    {
        if (n%i == 0){
            printf("counter  %d ", i);
            som += i;
            printf("sum %d\n", som);
        }
        
    }
    if (som == n)
    {
        printf("%d est parfait", n);

    }else printf("%d n'est pas parfait", n);
    return 0;
    
    
}