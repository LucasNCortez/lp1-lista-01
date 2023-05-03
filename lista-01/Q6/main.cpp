#include <iostream>
#include <fstream>

using namespace std;

void escreverArquivo(string linhaEscrita, string arquivoNome){
  fstream arquivo;
  arquivo.open(arquivoNome, ios::app);
  arquivo << linhaEscrita;
  arquivo.close();
}

int main(){
  fstream arquivo;

  string musica;
  string linhaLeitura;

  while (true){
    cout << "Digite o nome de uma música ou 1 para parar:";
    getline(cin, musica);
    if (musica == "1"){
      break;
    }
    musica += "\n";
    escreverArquivo(musica,"meuArquivo.txt");
  }

  while (true){
    cout << "Verifique se uma música está salva\nDigite a música desejada:";
    getline(cin, musica);
    arquivo.open("meuArquivo.txt", ios::in);
    while (getline(arquivo, linhaLeitura)){
      if (linhaLeitura == musica){
        cout << "A música " << musica << " está salva no sistema\n";
        return 0;
      }
    }
    arquivo.close();
    cout << "A música " << musica << " não se encontra no sistema ):\n";
    break;
  }
}