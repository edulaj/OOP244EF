#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
#include "budgie.h"
#include "goldfish.h"
using namespace oop244;
int main(){
  Cat C;
  Budgie B;
  GoldFish G;
  Animal* ap[3] = { &C, &B, &G };
  for (int i = 0; i < 3; i++){
    cout << "---------------------Loop "<< i + 1 << endl;
    ap[i]->act();
    ap[i]->move();
    ap[i]->sound();
  }
  cout << "---------------------End of main" << endl;
  return 0;
}
