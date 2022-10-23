#include <stdio.h>



int main()
{
	int nbre, chiffre, n, occurences;

	
	do{
		printf("Veuillez saisir un nombre\n");
		scanf("%d", &nbre);
		printf("Veuillez saisir un chiffre \n");
		scanf("%d", &chiffre);
		}while(nbre <=0 || chiffre<0 || chiffre>9);

		n = nbre;

		while(nbre > 0){
			if (chiffre == nbre%10)
		{
			occurences += 1;
		}
		nbre = nbre/10;


		}







	printf("Le chiffre %d apparait %d fois dans le nombre %d\n.",chiffre, occurences, n);
		


	return 0;
}