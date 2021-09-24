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
 * !Author          :                    !Date: 24.09.2021
 * !Coding Language : C
 *
 **********************************************************************************************************************/
#ifndef PLUS_OU_MOINS_H_
#define PLUS_OU_MOINS_H_

/**********************************************************************************************************************/
/* INCLUDE FILES                                                                                                      */
/**********************************************************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NB_CHOIX_MENU 2
#define MIN_DEFAULT 1
#define MAX_DEFAULT 100
#define NB_VIES_DEFAULT 10

/**********************************************************************************************************************/
/* CONSTANTS, MACROS                                                                                                  */
/**********************************************************************************************************************/
#ifndef TRUE
  #define TRUE (1 == 1)
#endif
#ifndef FALSE
  #define FALSE (1 == 0)
#endif


/**********************************************************************************************************************/
/* TYPES                                                                                                              */
/**********************************************************************************************************************/

/**********************************************************************************************************************/
/* FUNCTIONS                                                                                                          */
/**********************************************************************************************************************/
/*!
 * \brief Description : Changes the game option.
 * \param[in] pMin Minimal Number to search in game.
 * \param[in] pMax Maximal number to search in game.
 * \param[in] pNbLives Maximal number to search in game.
 * \return Description
 */
void changeOptions(int *pMin, int *pMax, int *pNbLives);


/*!
 * \brief Description : Starts a game.
 * \param[in] pMin Minimal Number to search in game.
 * \param[in] pMax Maximal number to search in game.
 * \param[in] pNbLives Maximal number to search in game.
 * \return Description
 */
void startGame(int *pMin, int *pMax, int *pNbLives);


#endif //PLUS_OU_MOINS_H_
