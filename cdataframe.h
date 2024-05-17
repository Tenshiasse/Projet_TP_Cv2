#ifndef CDATAFRAME_H
#define CDATAFRAME_H
#include "column.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct maillon
{
    COLUMN *colonne;
    struct maillon *succ;
};
/*-Définition du type maillon*/
typedef struct maillon MAILLON;
/*-Définition du type liste-*/
typedef MAILLON* LISTE;

MAILLON* creer_maillon(COLUMN*);
int liste_vide(LISTE);
void print_cdataframe(LISTE);
#endif