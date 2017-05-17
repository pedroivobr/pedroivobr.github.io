#include "circulo.h"
#include <cmath>

Circulo::Circulo(int x, int y, int raio, int tipo)
{
    this->x = x;
    this->y = y;
    this->raio = raio;
    this->tipo = tipo;
}

void Circulo::draw(Screen &t)
{
    if(tipo == 1){
        t.setPixel(x,y);
        for(int i = 0; i < raio;i++){
            int x0 = raio - i;
            int y0 = 0;
            int err = 0;
            while (x0 >= y0)
            {
                t.setPixel(x + x0, y + y0);
                t.setPixel(x - y0, y + x0);
                t.setPixel(x + y0, y + x0);
                t.setPixel(x - x0, y + y0);
                t.setPixel(x - x0, y - y0);
                t.setPixel(x - y0, y - x0);
                t.setPixel(x + y0, y - x0);
                t.setPixel(x + x0, y - y0);

                y0 += 1;
                if (err <= 0)
                {
                    err += 2*y0 + 1;
                }
                if (err > 0)
                {
                    x0 -= 1;
                    err -= 2*x0 + 1;
                }
            }
        }
    }else{
        int x0 = raio;
        int y0 = 0;
        int err = 0;
        while (x0 >= y0)
        {
            t.setPixel(x + x0, y + y0);
            t.setPixel(x - y0, y + x0);
            t.setPixel(x + y0, y + x0);
            t.setPixel(x - x0, y + y0);
            t.setPixel(x - x0, y - y0);
            t.setPixel(x - y0, y - x0);
            t.setPixel(x + y0, y - x0);
            t.setPixel(x + x0, y - y0);

            y0 += 1;
            if (err <= 0)
            {
                err += 2*y0 + 1;
            }
            if (err > 0)
            {
                x0 -= 1;
                err -= 2*x0 + 1;
            }
        }
    }
}
