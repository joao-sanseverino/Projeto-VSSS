#include <iostream>
#include "robots.h"
#include "game_functions.h"
#include <math.h>
#include "utils.h"

using namespace std;

int main()
{
    int quant=2, IDgoleiro=1, IDzagueiro=2;

    orientacao bola;

    cout<<" Posicao inicial da bola (X Y): ";
    cin>>bola.x>>bola.y;
    if(bola.x<85)
    {
        cout<<" Situacao: Defesa."<<endl<<endl;
    }
    else
    {
        cout<<" Situacao: Ataque."<<endl<<endl;
    }
    robots robo[quant]; //vetor
    game_functions funcao(robo, quant);

    //imprimindo informações dos robôs

    for(int i=0;i<quant;i++)
    {
        cout<<endl<<endl<<" _________________________ Robo "<< robo[i].getID() <<" _________________________"<<endl;
        if(robo[i].getID()==IDgoleiro)
        {
            cout<<" Funcao:  Goleiro."<<endl;
            funcao.meta_goleiro(robo,robo[i].getID(),bola);
        }
        else
        {
            cout<<" Funcao:  Zagueiro."<<endl;
            funcao.meta_zagueiro(robo,robo[i].getID(),bola);
        }

        cout<<" Distancia ate a meta: "<<funcao.distancia(robo[i].getPosicao(),robo[i].getMeta())<<endl;
        cout<<" Posicao ->  X: "<<robo[i].getPosicao().x<<"    Y: "<<robo[i].getPosicao().y;
        cout<<"    Theta: "<<robo[i].getTheta()<<endl;
        cout<<" Meta ->     X: "<<robo[i].getMeta().x<<"    Y: "<<robo[i].getMeta().y<<endl;
        cout<<" Angulo entre o gol e a meta:"<<funcao.alfa(funcao.centroidDef,robo[i].getMeta())<<endl;
        cout<<" Angulo entre o gol e a bola:"<<funcao.alfa(funcao.centroidDef,bola)<<endl;
    }

    return 0;
}
