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
  ...

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
    ...
  }

  cout << "Imprimindo os pontos obtidos" << endl;
  ser->imprimir();

  cout << "Limite Superior: ";
  ...

  cout << "Limite Inferior: ";
  ...
  return 0;
}
