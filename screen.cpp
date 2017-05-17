#include "screen.h"

Screen::Screen(int nlin, int ncol)
{
    this->nlin = nlin;
    this->ncol = ncol;

    mat =  vector<vector<char> > (nlin, std::vector<char>(ncol,' '));
}

void Screen::setBrush(char brush)
{
    this->brush = brush;
}

void Screen::setDim(int x, int y)
{
    nlin = x;
    ncol = y;
}

void Screen::setPixel(int x, int y){
    mat[x][y] = brush;
}

void Screen::clear()
{
    for(int i=0; i< nlin ;i++){
        for(int j=0; j< ncol;j++){
            mat[i][j] = ' ';
        }
    }
}

ostream& operator<<(ostream &os, Screen &t){
    for(int i=0; i< t.nlin ;i++){
        for(int j=0; j< t.ncol;j++){
            os << " " << t.mat[i][j];
        }
        os<< endl;
    }
    return os;
}
