#include "myHeader.hpp"

int areaQuadrado(int lado){
  return lado * lado;
}

float areaCirculo(int raio){
  float pi = 3.14;
  return (raio * raio) * pi;
}

float areaTrianguloEquilatero(int lado){
  float raizDeTresSobreDois = 0.86;
  return (lado * lado * raizDeTresSobreDois) / 2;
}