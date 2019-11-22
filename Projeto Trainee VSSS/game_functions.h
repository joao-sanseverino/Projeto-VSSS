#ifndef GAME_FUNCTIONS_H
#define GAME_FUNCTIONS_H
#include <iostream>
#include "utils.h"

class game_functions : public utils
{

    public:
        orientacao centroidAtk, centroidDef;

        game_functions(robots robo[],int);
        virtual ~game_functions();
        void setRobo(robots robo[],int);

        void meta_goleiro(robots robo[],int,orientacao);
        void meta_zagueiro(robots robo[],int,orientacao);


};

#endif // GAME FUNCTIONS_H
