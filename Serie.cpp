#include "Serie.h"


serie::void setNome(string nome){
  this->Nome = nome; 
}

serie::void setNomeDoCanalX(string nomeDoCanalX){
  this->NomeDoCanalX = nomeDoCanalX;
}
  
serie::setNomeDoCanalY(string nomeDoCanalY){
  this->NomeDoCanalY = nomeDoCanalY; 
}

serie::string getNome(){
  return Nome;
}

serie::string getNomeDoCanalX(){
  return NomeDoCanalX;
}

serie::string getNomeDoCanalY(){
  return NomeDoCanalY;
}

serie::bool estaVazia(){
  if (quantidade != 0)
    return true;
  else return false;
