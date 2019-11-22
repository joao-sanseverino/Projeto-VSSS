#include "robots.h"

robots::robots()
{
    //ctor
}

robots::~robots()
{
    //dtor
}
void robots::setAll(int ID,orientacao posicao,float theta)
{
    setID(ID);
    setPosicao(posicao);
    setTheta(theta);
}
void robots::setID(int ID)
{
    robots::ID=ID;
}
void robots::setPosicao(orientacao posicao)
{
    robots::posicao=posicao;
}
void robots::setTheta(float theta)
{
    robots::theta=theta;
}
void robots::setMeta(orientacao meta)
{
    robots::meta=meta;
}
int robots::getID()
{
    return ID;
}
orientacao robots::getPosicao()
{
    return posicao;
}
float robots::getTheta()
{
    return theta;
}
orientacao robots::getMeta()
{
    return meta;
}
