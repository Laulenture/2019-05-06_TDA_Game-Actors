#ifndef ACTOR_H_INCLUDED
#define ACTOR_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
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

typedef struct tActor{

    SDL_Texture* textActor;
    tVector2d Vect;
    int height;
    int width;

}tActor;

///Prototypes
setActor(int w, int h, tVector2d Vect, char cChemin[100]);



#endif // ACTOR_H_INCLUDED
