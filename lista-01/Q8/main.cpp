#include <iostream>

using namespace std;

int somaAB(int a, int b){
  int soma = 0;
  if (a > b){
    int temp = a;
    a = b;
    b = temp;
  }
  if(a == b){
    return a;
  }else{
    return a + somaAB(a+1, b);
  }
}

int main(){
  int a, b;
  cout << "\nInteiro A: "; cin >> a;
  cout << "\nInteiro B: "; cin >> b;
  cout << "\nA soma dos números de "<< a << " a "<< b << " é: " << somaAB(a,b) << endl << endl;
}