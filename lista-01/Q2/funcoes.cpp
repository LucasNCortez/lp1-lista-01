#include <vector>
#include <iostream>
#include <string>

using namespace std;

#include "myHeader.hpp"

vector<string> simulatedPush(vector<string> vector, string pushedString){
  vector.push_back(pushedString);
  return vector;
}

vector<string> simulatedStackPop(vector<string> vector){
  vector.pop_back();
  return vector;
}

vector<string> simulatedQueuePop(vector<string> vector){
  vector.erase(vector.begin());
  return vector;
}

void printVector(vector<string> vector){
  cout << "[ ";
  for (auto i : vector) {
    cout << i << " ";
  }
  cout << "]\n";
}