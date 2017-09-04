#include <iostream>
#include <string>

#include "Serie.h"
#include "Ponto.h"
#include "InterfaceSerial.h"

#define COMM "\\\\.\\COM3"

using namespace std;

int main() {
  InterfaceSerial* is = new InterfaceSerial();
  is->inicializar(COMM);
  

  // Obtem o nome e o atribui a serie ser
  string nomeSerie;
  cout << "Informe o nome da serie: ";
  cin >> nomeSerie;
  cout << endl;
  
  // Obtem  os canais escolhidos
  string canalX;
  string canalY;
  string listaCanais[NUMERO_MAXIMO_VALORES] = is->getNomeDosCanais();
  int quantidadeCanais = is->getQuantidadeDeCanais();
  int escolha;
  
  //Imprime a lista de canais para X
  for(i=0; i < quantidadeCanais; i++){
    cout << i + 1 << ") " << listaCanais[i] << endl;
  }
  cin >> escolha;
  canalX = listaCanais[escolha - 1];
  
  //Imprime a lista de canais para Y
  for(i=0; i < quantidadeCanais; i++){
    cout << i + 1 << ") " << listaCanais[i] << endl;
  }
  cin >> escolha;
  canalY = listaCanais[escolha - 1];
  
  // Obtem o numero de Pontos a adicionar
  int quantidade;
  cout << "Obter quantos pontos? ";
  cin >> quantidade;
  cout << endl;

  // Cria a Serie
  Serie* ser = new Serie();
  ser->setNome(nomeSerie);

  cout << "Obtendo os pontos" << endl;
  for (int i = 0; i < quantidade; i++) {
    is->atualizar();
    // adiciona os valores a Serie
    ser->adicionar(Pontos[i]->getX(), Pontos[i]->getY);
  }

  cout << "Imprimindo os pontos obtidos" << endl;
  ser->imprimir();

  cout << "Limite Superior: ";
  cout << "(" << ser->PontoSuperior->getX();
  cout << ", " << ser->PontoSuperior->getY();
  cout << ")" << endl << endl;

  cout << "Limite Inferior: ";
  cout << "(" << ser->PontoInferior->getX();
  cout << ", " << ser->PontoInferior->getY();
  cout << ")" << endl;
  return 0;
}
