#include "Ponto.h"
#include <iostream>
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

