#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"
/**
 * @brief A Classe Circulo é o prototipo de um circulo
 *
 * A Classe Circulo serve para desenhar circulos.
 */
class Circulo : public FiguraGeometrica
{
private:
    int x,y,raio,tipo;
public:
    /**
     * @brief Circulo Construtor da classe Circulo
     * @param x Coordenada x do centro
     * @param y Coordenada y do centro
     * @param raio Raio do Circulo
     * @param tipo Controlador de preenchimento
     *
     * Construtor da classe Circulo
     */
    Circulo(int x,int y,int raio,int tipo);
    /**
     * @brief draw Metodo de desenho na tela
     * @param t Tela para desenho
     *
     * Metodo que desenha um circulo na tela
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H
