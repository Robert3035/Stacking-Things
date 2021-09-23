/*Robert Salyers
Computer Science 2
This program reads numbers in revers order of how they were put into a stack*/
#include <iostream>
//include stack file
#include "stack.h"

using namespace std;

int main() {
  //reverse num 1234
  stack test;
  //put numbers in stack
  test.push(1);
  test.push(2);
  test.push(3);
  test.push(4);
  //print numbers off of top of stack while it has numbers in it
  while(!test.isEmpty()){
    cout << test.pop() << endl;
  }
}