#include "retangulo.h"
#include <cmath>
using namespace std;
Retangulo::Retangulo(int x,int y,int largura, int altura)
{
    this->x = x;
    this->y = y;
    this->largura = largura;
    this->altura = altura;
}

void Retangulo::draw(Screen &t)
{
    for(int i=y; i<altura+y; i++){
            for(int j=x; j<largura+x; j++){
                t.setPixel(i,j);
            }
    }
}

