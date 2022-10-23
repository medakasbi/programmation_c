#include<stdio.h>

int main(){

    float a, p=1;
    int n ;

    // pour n>0
    
    // do
    // {
    //     /* Saisir a et n */
    //     printf("Saisir un reel :");
    //     scanf("%f", &a);
    //     printf("Saisir un entier :");
    //     scanf("%d", &n);
    // } while (n>0 && n < 11);

    //Dans le cas general

        printf("Saisir un reel :");
         scanf("%f", &a);
         printf("Saisir un entier :");
         scanf("%d", &n);



    if (n>0)
    {
        for (int i = 1; i < n+1; i++)
        {
            /* code */
            p *= a;
        }
       
        
    }else if (n < 0)
    {
        printf("a before %f\n", a);
        printf("p before %f\n", p);
        printf("************\n");
        for (int i = 1; i < -n+1; i++)
        {
            /* code */
            printf("i %d\n", i);
            printf("%.2f\n", a);
            
            p = p/a;
            printf("%f\n", p);
        }
        
    }

    printf("%.4\nf", p);
    
    
    
}