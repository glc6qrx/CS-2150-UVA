// Dion Niazi dn3gy 06 02 2017 testPostfixCalc.cpp
#include <iostream>
#include "postfixCalculator.h"
using namespace std;
int main() {
  PostFixCalculator p;
  /*  p.pushNum (1);
  p.pushNum (2);
  p.pushNum (3);
  p.pushNum (4);
  p.pushNum (5);
  p.add();
  p.add();
  p.add();
  p.add();*/
  p.pushNum(3);
  p.pushNum(6);
  p.add();
  p.pushNum(8);
  p.pushNum(4);
  p.div();
  p.sub();
  /*  p.pushNum(20);
  p.pushNum(10);
  p.sub();
  p.pushNum(-3);
  p.pushNum(10);
  p.sub();
  p.sub();
  p.pushNum(2);
  p.sub();*/
  /*  p.pushNum(-1);
  p.pushNum(-2);
  p.pushNum(-5);
  p.pushNum(3);
  p.mult();
  p.pushNum(2);
  p.pushNum(-2);
  p.mult();
  p.mult();
  p.mult();
  p.mult();*/
  /*  p.pushNum(-1512);
  p.pushNum(-12);
  p.pushNum(-2);
  p.div();
  p.div();
  p.pushNum(-2);
  p.div();
  p.pushNum(3);
  p.div();*/
 /* p.pushNum(-1);
  p.neg();
  p.neg();
  p.neg();*/
  cout << "Result is: " << p.getTopValue() << endl;
  return 0;
}