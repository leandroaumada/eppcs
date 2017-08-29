#include "Ponto.h"
#include <iostream>
#define eps 1e-5
#include <math.h>
usingnamespace std

double Ponto :: getX(){
  return X;
}

void Ponto :: setX(double x){
  this->X = x;
}

double Ponto :: getY(){
  return Y;
}

void Ponto :: setY(double y){
  this->Y = y;
}

void Ponto :: imprimir(){
  cout << "(" << x << " ; " << y << ")" << endl;
 }

bool eIgual(Ponto* outro){
    if (fabs(outro->X - this->X) <= eps && fabs(outro->Y - this->Y) <= eps)
      return true;
    else return false;
};

