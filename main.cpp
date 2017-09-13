#include <iostream>
#include <string>

#include "Serie.h"
#include "Ponto.h"
#include "InterfaceSerial.h"

#define COMM "\\\\.\\COM3"

using namespace std;

int main() {

  int i = 0;
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
  int quantidadeCanais = is->getQuantidadeDeCanais();
  int escolha;

  //Imprime a lista de canais para X
  cout << "Escolha o Canal X: " << endl;
  for(i=0; i < quantidadeCanais; i++){
    cout << i + 1 << ") " << is->getNomeDosCanais()[i] << endl;
  }
  cin >> escolha;
  canalX = is->getNomeDosCanais()[escolha - 1];

  //Imprime a lista de canais para Y
  cout << "Escolha o Canal Y: " << endl;
  for(i=0; i < quantidadeCanais; i++){
    cout << i + 1 << ") " << is->getNomeDosCanais()[i] << endl;
  }
  cin >> escolha;
  canalY = is->getNomeDosCanais()[escolha - 1];

  // Obtem o numero de Pontos a adicionar
  int quantidade;
  cout << "Obter quantos pontos? ";
  cin >> quantidade;
  cout << endl << endl;

  // Cria a Serie
  Serie* ser = new Serie();
  ser->setNome(nomeSerie);

  cout << "Obtendo os pontos" << endl;
  for (i = 0; i < quantidade; i++) {
    is->atualizar();
    // adiciona os valores a Serie
    ser->adicionar(is->getValor(canalX), is->getValor(canalY));
  }

  cout << "Imprimindo os pontos obtidos" << endl;
  ser->imprimir();
  cout << endl;

  cout << "Limite Superior: ";
  cout << "(" << ser->getLimiteSuperior()->X;
  cout << ", " << ser->getLimiteSuperior()->Y;
  cout << ")" << endl << endl;

  cout << "Limite Inferior: ";
  cout << "(" << ser->getLimiteInferior()->X;
  cout << ", " << ser->getLimiteSuperior()->Y;
  cout << ")" << endl;
  return 0;
}
