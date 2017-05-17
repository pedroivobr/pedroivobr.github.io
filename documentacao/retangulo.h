#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"
/**
 * @brief A Classe Retangulo é o prototipo de um retangulo
 *
 * A Classe Reta serve para desenhar retangulos.
 */
class Retangulo : public FiguraGeometrica
{
private:
    int x,y,largura,altura;
public:
    /**
     * @brief Retangulo Construtor da classe Retangulo
     * @param x Coordenada x do canto superior direito
     * @param y Coordenada y do canto superior direito
     * @param largura Largura do retangulo
     * @param altura Altura do retangulo
     */
    Retangulo(int x,int y,int largura, int altura);
    /**
     * @brief draw Método para desenhar na tela
     * @param t Tela para desenho
     *
     * Desenha um retangulo na tela.
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
