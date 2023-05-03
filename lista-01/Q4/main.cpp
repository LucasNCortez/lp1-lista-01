#include <iostream>
#include <map>
#include <vector>

using namespace std;

typedef struct Aluno{
  string name;
  float num1, num2, num3;
}Aluno;


int main(){
  float num1Temp, num2Temp, num3Temp;
  string nameTemp;

  vector<Aluno> alunos;
  Aluno alunoDadosTemp;

  int command;

  float mediaGeral;
  float soma;

  while (command != 3){
    if(command != 2){
      cout << "\nDigite o nome do aluno: ";
      cin >> nameTemp;
      cout << "Digite a primeira nota do aluno: ";
      cin >> num1Temp;
      cout << "Digite a segunda nota do aluno: ";
      cin >> num2Temp;
      cout << "Digite a terceira nota do aluno: ";
      cin >> num3Temp;
      cout << endl;

      alunoDadosTemp.name = nameTemp;
      alunoDadosTemp.num1 = num1Temp;
      alunoDadosTemp.num2 = num2Temp;
      alunoDadosTemp.num3 = num3Temp;

      alunos.push_back(alunoDadosTemp);
    }
    
    cout << "[1]Adicionar nova nota\n[2]Obter médias\n[3]Sair\n";
    cin >> command;
  
    if (command == 2){
      soma = 0;
      for (auto i : alunos){
        soma += (i.num1 + i.num2 + i.num3)/3;
        cout << i.name << " - Média do aluno = " << (i.num1 + i.num2 + i.num3)/3 << endl;
      }
      mediaGeral = soma/alunos.size();
      cout << "Média geral = " << mediaGeral << endl;
    }
  }
}