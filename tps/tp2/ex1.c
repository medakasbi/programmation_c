#include <stdio.h>


int main(){


	int n, sum=0, prod=1, i;

	do{
		printf("Veuillez saisir un entier\n");
		scanf("%d", &n);

	}while(n<1);



	for (int i = 1; i <= n; i++)
	{
		if (i%2 == 0)
		{
			sum +=i;
			prod = prod * i;

		}
	}
	printf("la somme des entiers paires inferieurs a %d est %d\n",n , sum);
	printf("le produit des entiers paires inferieurs a %d est %d\n",n , prod);



	printf("\n\nAvec le while maitenant: *****\n");

	sum=0, prod=1, i= 1;

	while(i>0 && i <= n){

		if (i%2 == 0)
		{
			sum +=i;
			prod = prod * i;

		}

		i++;


	}

	printf("la somme des entiers paires inferieurs a %d est %d\n",n , sum);
	printf("le produit des entiers paires inferieurs a %d est %d\n",n , prod);
}