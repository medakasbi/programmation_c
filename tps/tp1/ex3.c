#include <stdio.h>

int main(){
    int A = 20, B = 5, C = 10, D = 2, X = 12, Y = 15;
    int a;
    int i=1;

    a = (5*X)+2 * ((3*B)+5);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a = (5*(X+2)*3)*(B+4);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a =  A == (B=5);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;


    a = A += (X+5);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a = A!=(C*=(-D));
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a= A*=C+(X-D);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a= A %= D++;
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;

    a= A%= D ++;
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;


    a= (X++) * (A + C);
    
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;


    a = A = X * (B<C) + Y * !(B<C);
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;
    


    a = !(X-D+C) || D;
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;
    
    A && B || !0 && C && !D;
    printf("L'expression numero %d =  %d \n", i, a);
    printf(" A = %d\n B = %d\n C = %d\n D = %d\n X = %d\n Y = %d\n", A, B, C, D, X, Y);
    printf("***********************************\n");
    i++;
    











    







}