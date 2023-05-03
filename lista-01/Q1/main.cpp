#include <iostream>
#include <string>
#include "myHeader.hpp"
using namespace std;

int main( int argc, char* argv[] ){
  string quadrado = "quadrado", circulo = "circulo", triangulo = "triangulo";
  if (quadrado.compare(argv[1]) == 0){
    int lado;
    cout << "Digite o lado do quadrado: ";
    cin >> lado;
    cout << "Área de " << areaQuadrado(lado) << " unidades quadradas\n";
  }else if (circulo.compare(argv[1]) == 0){
    int raio;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    cout << "Área de " << areaCirculo(raio) << " unidades quadradas\n";
  }else if (triangulo.compare(argv[1]) == 0){
    int lado;
    cout << "Digite o lado do triângulo: ";
    cin >> lado;
    cout << "Área de " << areaTrianguloEquilatero(lado) << " unidades quadradas\n";
  }else {
    cout << "Digite um argumento válido\n['quadrado', 'circulo' ou 'triangulo']";
  }
}