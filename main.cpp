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

  cout << "Push back" << endl;

  testList.push_back(20);
  cout << "testList: " << testList << endl;
  testList.push_back(3);
  cout << "testList: " << testList << endl;
  testList.push_back(2);
  cout << "testList: " << testList << endl;



    return 0;
}