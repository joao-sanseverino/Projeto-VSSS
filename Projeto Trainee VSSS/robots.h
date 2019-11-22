#ifndef ROBOTS_H
#define ROBOTS_H

struct orientacao
{
    float x=0, y=0;
};
class robots
{
    private:
    int ID;
    float theta;
    orientacao posicao ;
    orientacao meta;

    public:
        robots();
        void setAll(int,orientacao,float);
        virtual ~robots();
        void setID(int);
        void setPosicao(orientacao);
        void setTheta(float);
        void setMeta(orientacao);
        int getID();
        orientacao getPosicao();
        float getTheta();
        orientacao getMeta();
};

#endif // ROBOTS_H
