#include <iostream>
#include <string>
#include "Intlist.h"

using namespace std;



int main() {


  //cout << "hello";
  IntList testList;
  testList.push_front(5);
  cout << "testList: " << testList << endl;
  testList.push_front(7);
  cout << "testList: " << testList << endl;
  testList.push_front(7);
  cout << "testList: " << testList << endl;
  testList.push_front(9);
  cout << "testList: " << testList << endl;
  testList.push_front(11);
  cout << "testList: " << testList << endl;
  testList.push_front(1);
  cout << "testList: " << testList << endl;



    return 0;
}