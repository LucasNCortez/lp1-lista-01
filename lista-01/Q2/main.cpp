#include <iostream>
#include <vector>
#include <string>

using namespace std;

#include "myHeader.hpp"

int main(){
  vector<string> simulatedStack;
  vector<string> simulatedQueue;

  int choice;
  string input;

  int actionChoice;

  while (choice != 3){
    choice = 0;
    cout << "Qual você deseja simular?\n[1] Pilha (stack)\n[2] Fila (Queue)\n[3] Sair" << endl ;
    cin >> choice;
    if (choice == 1){
      while (true) {
        actionChoice = 0;
        cout << "[1] Adicionar à pilha\n[2] Remover da pilha\n[3] Voltar" << endl;
        cin >> actionChoice;
        if (actionChoice == 1){
          cout << "Digite um elemento a ser adicionado: ";
          cin >> input;
          simulatedStack = simulatedPush(simulatedStack, input);
          printVector(simulatedStack);
        } else if (actionChoice == 2 && simulatedStack.size() > 0){
          simulatedStack = simulatedStackPop(simulatedStack);
          printVector(simulatedStack);
         }else if (actionChoice == 3){
          break;
        } else{
          cout << "\nargumento inválido\n\n";
        }
      }
    }else if (choice == 2){
      while (true) {
        actionChoice = 0;
        cout << "[1] Adicionar à fila\n[2] Remover da fila\n[3] Voltar" << endl;
        cin >> actionChoice;
        if (actionChoice == 1){
          cout << "Digite um elemento a ser adicionado: ";
          cin >> input;
          simulatedQueue = simulatedPush(simulatedQueue, input);
          printVector(simulatedQueue);
        } else if (actionChoice == 2 && simulatedQueue.size() > 0){
          simulatedQueue = simulatedQueuePop(simulatedQueue);
          printVector(simulatedQueue);
         }else if (actionChoice == 3){
          break;
        } else{
          cout << "\nargumento inválido\n\n";
        }
      }
    }else{
      cout << "\nargumento inválido\n\n";
    }
  }
  cout << "\n\nPrograma finalizado." << endl;
}