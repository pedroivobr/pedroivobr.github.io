#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"
/**
 * @brief A Classe Reta é o prototipo de uma reta
 *
 * A Classe Reta serve para desenhar retas.
 */
class Reta : public FiguraGeometrica
{
private:
    int x1,x2,y1,y2;
public:
    /**
     * @brief Reta Construtor da Classe Reta
     * @param x1 Coordenada x do primeiro ponto
     * @param y1 Coordenada y do primeiro ponto
     * @param x2 Coordenada x do segundo ponto
     * @param y2 Coordenada y do segundo ponto
     */
    Reta(int x1,int y1, int x2,int y2);
    /**
     * @brief draw Método que desenha na tela.
     * @param t Tela para desenho
     *
     * O método desenha uma reta na tela.
     */
    void draw(Screen &t);
};

#endif // RETA_H
