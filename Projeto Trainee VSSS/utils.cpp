#include "utils.h"
#include <math.h>

utils::utils()
{
    //ctor
}

utils::~utils()
{
    //dtor
}

float utils::distancia(orientacao pi,orientacao pf)
{
    return sqrt(pow(pf.x-pi.x,2)+pow(pf.y-pi.y,2));
}

float utils::alfa(orientacao pi,orientacao pf)
{
    float x=((atan((pf.y-pi.y)/(pf.x-pi.x)))*180/3.14159265359);
    if(pf.x<pi.x)// segundo quadrante e terceiro quadrante
    {
        x+=180;
    }
    else if(pf.y<pi.y) // quarto quadrante
    {
        x+=360;
    }

    return x;
}
