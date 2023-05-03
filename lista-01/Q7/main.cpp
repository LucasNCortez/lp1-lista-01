#include <iostream>

using namespace std;

double potencia(double base, double expoente){
  if (expoente == 0){
    return 1;
  }
  if(base == 1){
    return base;
  }
  return base * potencia(base, expoente - 1);
}

int main(){
  int base, expoente;

  cout << "\nBase da potência: ";
  cin >> base;

  cout << "\nExpoente da potência: ";
  cin >> expoente;

  cout << "\nO resultado da potência é: " << potencia(base, expoente) << endl;
}