#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"
/**
 * @brief A classe FiguraGeometrica é um prototipo de figura geometrica
 *
 * A classe FiguraGeometrica é um prototipo para criação de figuras geometricas.
 */
class FiguraGeometrica
{   
public:
    /**
     * @brief FiguraGeometrica Construtor padrão
     *
     * Construtor da classe FiguraGeometrica
     */
    FiguraGeometrica();
    /**
     * @brief draw Metodo de desenho
     * @param t Tela de desenho
     *
     * Metede de desenho da figura na tela.
     */
    virtual void draw(Screen &t);
};

#endif // FIGURAGEOMETRICA_H
