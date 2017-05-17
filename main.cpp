#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
#include "figurageometrica.h"
#include "circulo.h"
#include "reta.h"
#include "retangulo.h"

using namespace std;
int main()
{
    ifstream entrada;
    ofstream saida;
    Screen tela(100,100); //tela padrão
    char *comando = new char();

    int x0,y0, x1,y1, l, a, r; //ponto 0, ponto 1, largura, altura e raio
    bool fillmode; //preenchimento do circulo
    char b; //pincel
    entrada.open("C:/Users/Pedro/Desktop/comandos.txt");
    if(!entrada.is_open()){
        cout<<"nao abriu arquivo entra\n";
        exit(0);
    }

    entrada>>comando;


    while(entrada.good()){ //enquanto a leitura não retornar
        if(!strcmp("rectangle", comando)){
            entrada>>x0>>y0>>l>>a;
            Retangulo ret(x0,y0,l, a);
            ret.draw(tela);
            cout<<"Retangulo com vertice em : ("<<x0 <<", "<< y0<<"); largura: "<< l << " e altura: "<< a <<endl;

        } else if(!strcmp("circle", comando)){

            entrada>>x0>>y0>>r>>fillmode;
            Circulo circulo(x0,y0, r, fillmode);
            circulo.draw(tela);
            cout<<"circulo de raio: "<<r<< " e centro em: ("<< x0 << ", "<<y0<<") e ";
            if(fillmode){
                cout << "preenchido";
            }
            else{
                cout << "nao preenchido";
            }
            cout<<endl;

        } else if(!strcmp("line", comando)){

            entrada>>x0>>y0>>x1>>y1;
            Reta reta(x0,y0,x1,y1);
            reta.draw(tela);
            cout<<"reta com P0: ("<<x0<<", "<<y0<<") e P1:("<<x1<<", "<<y1<<")"<<endl;

        } else if(!strcmp("brush", comando)){

            entrada>>b;
            tela.setBrush(b);
            cout<<"Brush: "<<b<<endl;

        } else if(!strcmp("dim", comando)){

            entrada>>x0>>y0;
            tela.setDim(x0,y0);
            cout<<"dimensao: "<<x0<<" "<<y0<<endl;
        } else if(!strcmp("clear", comando)){
            tela.clear();
            cout<<"tela limpa"<<endl;

        }
        entrada>>comando;
    }
    entrada.close();

    saida.open("C:/Users/Pedro/Desktop/desenho.txt");
    if(!saida.is_open()){
        cout<<"nao abriu arquivo saida\n";
        exit(0);
    }
    saida<<tela;

    saida.close();
return 0;
}
