#include "game_functions.h"
#include <iostream>
#include <math.h>

using namespace std;

game_functions::game_functions(robots robo[],int quant)
{
    centroidAtk.x=160;
    centroidAtk.y=65;
    centroidDef.x=10;
    centroidDef.y=65;
    setRobo(robo,quant);
}

game_functions::~game_functions()
{
    //dtor
}

void game_functions::setRobo(robots robo[],int quant)//define posição inicial e o ID de cada robô
{
    orientacao posicao;
    float theta;

    for(int i=0;i<quant;i++)
    {
        cout<<"Orientacao inicial do robo "<<i+1<<" -> (X Y Theta): ";
        cin>>posicao.x>>posicao.y>>theta;

        robo[i].setAll(i+1,posicao,theta);

    }
}

void game_functions::meta_goleiro(robots robo[],int ID,orientacao bola)//imprime angulo para meta e muda meta do goleiro
{
    orientacao meta;
    if(bola.x<85)//goleiro fica no gol
    {
        meta.x=5;
        if(bola.y>(centroidDef.y+20))
        {
            meta.y=centroidDef.y+20;
        }
        else if (bola.y<(centroidDef.y-20))
        {
            meta.y=centroidDef.y-20;
        }
        else meta.y=bola.y;
    }
    else//goleiro sai do gol e se mantém entre o gol e a bola
    {
        meta.x=20;
        meta.y=centroidDef.y+(10*tan(3.14159265359*alfa(centroidDef,bola)/180));
    }
    robo[ID-1].setMeta(meta);

    cout<<" Angulo para a meta: "<<alfa(robo[ID-1].getPosicao(),robo[ID-1].getMeta())<<endl;

}

void game_functions::meta_zagueiro(robots robo[],int ID,orientacao bola)//imprime angulo para meta e muda meta do zagueiro
{
    orientacao meta;
    if(bola.x<85)//zagueiro vai até a bola
    {
        meta.x=bola.x;
        meta.y=bola.y;
    }
    else//zagueiro se mantém no y da bola
    {
        meta.x=70;
        meta.y=bola.y;
    }
    robo[ID-1].setMeta(meta);

    cout<<" Angulo para a meta: "<<alfa(robo[ID-1].getPosicao(),robo[ID-1].getMeta())<<endl;

}

