#include <iostream>
#include <string>
#include "Intlist.h"

using namespace std;



int main() {


  //cout << "hello";
  IntList testList;
  cout << "Push front 5" << endl;
  testList.push_front(5);
  cout << "testList: " << testList << endl;
  cout << "Push front 7" << endl;
  testList.push_front(7);
  cout << "testList: " << testList << endl;
  cout << "Push front 7" << endl;
  testList.push_front(7);
  cout << "testList: " << testList << endl;
  cout << "Push front 9" << endl;
  testList.push_front(9);
  cout << "testList: " << testList << endl;
  cout << "Push front 11" << endl;
  testList.push_front(11);
  cout << "testList: " << testList << endl;
  cout << "Push front 1" << endl;
  testList.push_front(1);
  cout << "testList: " << testList << endl;

  cout << "Pop front 1" << endl;
  testList.pop_front();
  cout << "testList: " << testList << endl;
  cout << "Pop front 11" << endl;
  testList.pop_front();
  cout << "testList: " << testList << endl;
  cout << "Pop front 9" << endl;
  testList.pop_front();
  cout << "testList: " << testList << endl;
  cout << "Pop front 7" << endl;
  testList.pop_front();
  cout << "testList: " << testList << endl;

  cout << "Push back 20" << endl;
  testList.push_back(20);
  cout << "testList: " << testList << endl;
  cout << "Push back 3" << endl;
  testList.push_back(3);
  cout << "testList: " << testList << endl;
  cout << "Push back 2" << endl;
  testList.push_back(2);
  cout << "testList: " << testList << endl;



    return 0;
}