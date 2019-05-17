#ifndef LISTE_H_INCLUDED
#define LISTE_H_INCLUDED

#include<stdlib.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <SDL2/SDL.h>
#include "actor.h"
#include "vector.h"

/**
    i : int             :nNom
    f : float           :flNom
    d : double          :dblNom
    c : char            :cNom
    l : long            :lnNom
    ui: unsigned int    : unNomVar
    uf: unsigned float  : unfNomVar
    s : *STRING*
*/

typedef struct ElementListe{
    tActor *donnee;
    struct ElementListe *suivant;
} Element;

typedef struct ListeRepere{
    Element *debut;
    Element *fin;
    int taille;
} Liste;

///Prototypes
/* initialisation de la liste */
extern void initialisation (Liste * liste);

/* INSERTION */
/* insertion dans une liste vide */
extern int insListeVide (Liste * liste, tActor *donnee);
/* insertion au début de la liste */
extern int insDebutListe (Liste * liste, tActor *donnee);
/* insertion Ã a fin de la liste */
extern int insFinListe (Liste * liste, Element * courant, tActor *donnee);
/* insertition ailleurs */
extern int insListe (Liste * liste, tActor *donnee, int pos);

/* SUPPRESSION */
extern int suppDebut (Liste * liste);
extern int suppDansListe (Liste * liste, int pos);
extern int menu (Liste *liste,int *k);
extern void affiche (Liste * liste);
extern void detruire (Liste * liste);


#endif // LIST_H_INCLUDED
