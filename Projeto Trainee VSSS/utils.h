#ifndef UTILS_H
#define UTILS_H
#include "robots.h"

class utils
{
    private:

    public:
        utils();
        virtual ~utils();
        float distancia(orientacao,orientacao);
        float alfa(orientacao,orientacao);

};

#endif // UTILS_H
