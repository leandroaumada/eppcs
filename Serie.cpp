#include "Serie.h"


void  Serie::setNome(string nome){
  this->Nome = nome; 
}

void Serie::setNomeDoCanalX(string nomeDoCanalX){
  this->NomeDoCanalX = nomeDoCanalX;
}
  
void Serie::setNomeDoCanalY(string nomeDoCanalY){
  this->NomeDoCanalY = nomeDoCanalY; 
}

string Serie::getNome(){
  return Nome;
}

string Serie::getNomeDoCanalX(){
  return NomeDoCanalX;
}

string Serie::getNomeDoCanalY(){
  return NomeDoCanalY;
}

bool Serie::estaVazia(){
  if (quantidade != 0)
    return true;
  else return false;
}

int Serie::getQuantidade(){
  return Quantidade;
}

void Serie::adicionar(double x, double y){
  if(Quantidade < NUMERO_MAXIMO_VALORES){
    Pontos[Quantidade]->setX(x);
    Pontos[Quantidade]->setY(y);
    Quantidade++;
  }
}

Serie::Ponto* getPosicao(int posicao){
  if(posicao<0 || posicao >9)
    return null;
  return Pontos[posicao];
}

Serie::Ponto* getLimiteSuperior(){
  int i;
  double maiorX, maiorY;
  maiorX = Pontos[0]->X;
  maiorY = Pontos[0]->Y;
  
  //Encontra os maiores valores de X e Y entre os pontos da serie
  for(i = 1; i < NUMERO_MAXIMO_VALORES; i++){
    if(Pontos[i]->X > maiorX)
      maiorX = Pontos[i]->X;
    if(Pontos[i]->Y > maiorY)
      maiorY = Pontos[i]->Y;
  }
  //Atribui ao Atributo PontoSuperior os valores obtidos
  PontoSuperior->setX(maiorX);
  PontoSuperior->setY(maiorY);
  
  return PontoSuperior;
}

Serie::Ponto* getLimiteInferior{
  int i = 0;
  double limiteX, limiteY;
  limiteX = Pontos[i]->getX();
  limiteY = Pontos[i]->getY();
  for (i = 1; i < quantidade; i++){
  
    if(Pontos[i]->getX() < limiteX)
      limiteX = Pontos[i]->getX();
    if(Pontos[i]->getY() < limiteY)
      limiteY = Pontos[i]->getY();
  }
  PontoInferior->setX(limiteX);
  PontoInferior->setY(limiteY);
  
  return PontoInferior;
}

void Serie::imprimir(){
  cout << Serie << this->Nome << endl;
  for (i = 0; i < quantidade; i++){
    cout << "(" << Pontos[i]->getX() << ", " << Pontos[i]->getY() << ")" << endl;  
  }
}


