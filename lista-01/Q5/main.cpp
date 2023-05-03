#include <iostream>
#include <fstream>
#include <map>

using namespace std;

void escreverArquivo(string linhaEscrita, string arquivoNome){
  fstream arquivo;
  arquivo.open(arquivoNome, ios::app);
  arquivo << linhaEscrita;
  arquivo.close();
}

map<string, double> lerArquivo(string arquivoNome){
  fstream arquivo;
  string linhaLeitura;
  map<string, double> mapaNotas;
  string nome;
  double notas;
  double media;

  arquivo.open(arquivoNome, ios::in);
  
  while(getline(arquivo, linhaLeitura)){
    notas = 0;

    nome = linhaLeitura;

    getline(arquivo, linhaLeitura);
    notas += stod(linhaLeitura);
    getline(arquivo, linhaLeitura);
    notas += stod(linhaLeitura);
    getline(arquivo, linhaLeitura);
    notas += stod(linhaLeitura);

    media = notas/3;

    mapaNotas.insert(make_pair(nome, media));
  }
  arquivo.close();

  return mapaNotas;
}

void printarMapa(map<string, double> mapa){
   for (auto i = mapa.begin(); i != mapa.end(); ++i) {
    cout << i->first << " : " << i->second << endl;
  }
}

int main(){
  string aluno = "";
  float nota1, nota2, nota3;
  string notaString;

  while(true){
    aluno = "";
    cout << "\nDigite 1 para imprimir a lista de médias dos alunos\nou digite o nome do aluno a ser inserido:";
    getline(cin, aluno);
    if (aluno == "1"){
      break;
    }
    aluno += "\n";
    escreverArquivo(aluno, "meuArquivo.txt");

    cout << "\nPrimeira nota do aluno: ";
    cin >> nota1;
    notaString = to_string(nota1) + "\n";
    escreverArquivo(notaString, "meuArquivo.txt");

    cout << "\nSegunda nota do aluno: ";
    cin >> nota2;
    notaString = to_string(nota2) + "\n";
    escreverArquivo(notaString, "meuArquivo.txt");

    cout << "\nTerceira nota do aluno: ";
    cin >> nota3;
    notaString = to_string(nota3) + "\n";
    escreverArquivo(notaString, "meuArquivo.txt");
    cin.ignore();
  }
  map<string, double> mapaNotas = lerArquivo("meuArquivo.txt");
  printarMapa(mapaNotas);
}