#include<stdio.h>


int main(){

    int mois, jours = 0;

    do
    {
        printf("Veuillez saisir le numero du mois.\n");
        scanf("%d", &mois);

    } while (mois < 1 || mois > 12);
    


    switch (mois)
    {
    case 1:
        jours = 31;
        break;
    case 2:
        jours = 28;
        break;
    case 3:
        jours = 31;
        break;
    case 4:
        jours = 30;
        break;
    case 5:
        jours = 31;
        break;
    case 6:
        jours = 30;
        break;
    case 7:
        jours = 31;
        break;
    case 8:
        jours = 31;
        break;
    case 9:
        jours = 30;
        break;
    case 10:
        jours = 31;
        break;
    case 11:
        jours = 30;
        break;
    case 12:
        jours = 31;
        break;
    
    }

    printf("Le mois %d est de %d jours.\n", mois,jours);
    return 0;
}