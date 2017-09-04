#include "Serie.h"


Serie::void setNome(string nome){
  this->Nome = nome; 
}

Serie::void setNomeDoCanalX(string nomeDoCanalX){
  this->NomeDoCanalX = nomeDoCanalX;
}
  
Serie::void setNomeDoCanalY(string nomeDoCanalY){
  this->NomeDoCanalY = nomeDoCanalY; 
}

Serie::string getNome(){
  return Nome;
}

Serie::string getNomeDoCanalX(){
  return NomeDoCanalX;
}

Serie::string getNomeDoCanalY(){
  return NomeDoCanalY;
}

Serie::bool estaVazia(){
  if (quantidade != 0)
    return true;
  else return false;
}

Serie::int getQuantidade(){
  return Quantidade;
}

Serie::void adicionar(double x, double y){
  if(Quantidade < NUMERO_MAXIMO_VALORES){
    Pontos[Quantidade]->setX(x);
    Quantidade++;
  }
}
