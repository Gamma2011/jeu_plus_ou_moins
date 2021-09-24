/***********************************************************************************************************************
 * COMANY : 
 *
 * ROJECT  : 
 *
 ***********************************************************************************************************************
 * !File            : 
 *
 * !Comonent       : 
 * !Descrition     : 
 *
 * !Module          : 
 * !Descrition     :
 *
 * !Author          :                    !Date: 24.09.2021
 * !Coding Language : C
 *
 **********************************************************************************************************************/

/**********************************************************************************************************************/
/* INCLUDE FILES                                                                                                      */
/**********************************************************************************************************************/
#include"plus_ou_moins.h"

/**********************************************************************************************************************/
/* FUNCTIONS                                                                                                          */
/**********************************************************************************************************************/
void changeOptions(int *Min, int *Max, int *NbLives)
{
    int Choice;
    int Settings = TRUE;

    while(Settings)
    {
        printf("\n  - 1) Modifier Xmin (valeur : %d) et Xmax (valeur : %d).", *Min, *Max);
        printf("\n  - 2) Modifier le Nombre de vies (valeur : %d).", *NbLives);
        printf("\n  - 3) Retour au menu.\n");
        printf("\n  (entrez le numero correspondant) : ");
        scanf_s("%d", &Choice);

        switch(Choice)
        {
            case 1:
                printf("\nSaisissez la valeur de Xmin : ");
                scanf_s("%d", Min);
                printf("\nSaisissez la valeur de Xmax : ");
                scanf_s("%d", Max);
                while(*Min >= *Max)
                {
                    printf("\nXMin est superieur ou égal à Xmax !\n");
                    printf("\nSaisissez la valeur de XMin : ");
                    scanf_s("%d", Min);
                    printf("\nSaisissez la valeur de Xmax : ");
                    scanf_s("%d", Max);
                }
                break;
            case 2:
                printf("\nSaisissez le Nombre de vies : ");
                scanf_s("%d", NbLives);
                while(*NbLives <= 0)
                {
                    printf("\nVous devez saisir un Nombre superieur a 0 !\n");
                    printf("\nSaisissez le Nombre de vies : ");
                    scanf_s("%d", NbLives);
                }
                break;
            default:
                Settings = FALSE;
                break;
        }
    }
}

void startGame(int *Min, int *Max, int *NbLives)
{
    int MysteriousNumber = ((rand() % (*Max - *Min + 1)) + *Min);
    int Number;
    int Memory;

    Memory = *NbLives;

    while(*NbLives > 0)
    {
        printf("\nSaisissez un Nombre : ");
        scanf_s("%d",&Number);

        *NbLives -= 1;
        printf("\nIl vous reste %d vies !\n", *NbLives);
        if(Number > MysteriousNumber)
        {
            printf("\nVotre saisie est au dessus du Nombre mystere !\n");
        }
        else if(Number == MysteriousNumber)
        {
            printf("\nVous avez trouve le Nombre mystere ! Il valait %d !\n", MysteriousNumber);
            *NbLives = 0;
        }
        if(Number < MysteriousNumber)
        {
            printf("\nVotre saisie est en dessous du Nombre mystere !\n");
        }
    }
    if(*NbLives == 0)
    {
        printf("\nGame Over !\n");
    }
    *NbLives = Memory;
}