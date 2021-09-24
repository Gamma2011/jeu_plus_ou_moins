
/***********************************************************************************************************************
 * COMPANY : 
 *
 * PROJECT  : 
 *
 ***********************************************************************************************************************
 * !File            : 
 *
 * !Component       : 
 * !Description     : 
 *
 * !Module          : 
 * !Description     :
 *
 * !Author          :                    !Date: 
 * !Coding Language : C
 *
 **********************************************************************************************************************/

/**********************************************************************************************************************/
/* INCLUDE FILES                                                                                                      */
/**********************************************************************************************************************/
#include"plus_ou_moins.h"

/**********************************************************************************************************************/
/* MAIN FUNCTION                                                                                                      */
/**********************************************************************************************************************/
int main(void)
{
    srand(time(NULL)); // Initialisation du générateur de nombres

    int Choice;
    int Min = MIN_DEFAULT;
    int Max = MAX_DEFAULT;
    int NbLives = NB_VIES_DEFAULT;
    int Game = TRUE;

    printf("\n]==================================================[\n");
    printf("       BIENVENUE DANS LE JEU \"PLUS OU MOINS\" QUE LA FORCE SOIT AVEC VOUS ! (ou pas)");
    printf("\n]==================================================[\n");

    while(Game)
    {
        printf("\n]===== MENU :\n");
        printf("\n  - 1) Afficher les regles.");
        printf("\n  - 2) Modifier les parametres.");
        printf("\n  - 3) Commencer une partie.");
        printf("\n  - 4) Quitter.\n");
        printf("\n  (entrez le numero correspondant) : ");
        scanf_s("%d", &Choice);

        switch(Choice)
        {
            case 1:
                printf("\n]===== REGLES DU JEU :\n");
		printf("nLe but du jeu est de trouver le nombre mystère. Ce nombre est compris entre %d et %d. ", Min, Max);
		printf("A chaque mauvaise réponse, vous perdrez des vie (par défaut %d) donc faites attentions ! ", NbLives);
		printf("Vous gagnez la partie si vous trouvez le nombre mystère. Bonne chance !\n");
                break;
            case 2:
                printf("\n]===== PARAMETRES :\n");
                changeOptions(&Min, &Max, &NbLives);
                break;
            case 3:
                printf("\n]===== NOUVELLE PARTIE :\n");
                startGame(&Min, &Max, &NbLives);
                break;
            default:
                printf("\nAu revoir :)\n");
                Game = FALSE;
                break;
        }
    }

    return 0;
}
