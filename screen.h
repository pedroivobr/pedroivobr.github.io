#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <iostream>

using namespace std;
/**
 * @brief A classe Screen serve para criar um prototipo de tela.
 *
 * A classe Screen cria uma prototipo de tela que vai receber dados.
 */
class Screen{
private:
  // armazenam o tamanho da tela de desenho
  // no de linhas e de colunas
  int nlin, ncol;

  // guarda o caractere usado para desenhar
  char brush;

  // armazena a matriz da tela
  vector< vector<char> > mat;
public:
  // construtor da classe
  /**
   * @brief Screen Construtor da classe Screen
   * @param nlin Número de linhas da tela
   * @param ncon Número de colunas da tela
   */
  Screen(int nlin, int ncol);
  /**
   * @brief setPixel Desenha um pixel na matriz.
   * @param x
   * @param y
   *
   * Desenha um pixel na matriz usando o caractere guardado em brush
   */
  void setPixel(int x, int y);

  /**
   * @brief clear limpa a tela
   *
   * Limpa a tela.
   */
  void clear();
  /**
   * @brief setBrush Muda o caractere
   * @param brush caractere
   *
   * Muda o caractere de desenho
   */
  void setBrush(char brush);

  /**
   * @brief setDim Muda a dimensão da tela
   * @param x Número de linhas
   * @param y Número de colunas
   *
   * Redefine o tamanho da tela.
   */
  void setDim(int x,int y);
  // envia a tela para um stream de saida
  /**
   * @brief operator << Sobrecarga do operador
   * @param os objeto de entrada e saida
   * @param t Tela de desenho
   * @return retorna o objeto para saida
   *
   * Sobrecarga do operador << para a impressão da classe Screen usando o cout
   */
  friend ostream& operator<<(ostream &os, Screen &t);
};

#endif // SCREEN_H
