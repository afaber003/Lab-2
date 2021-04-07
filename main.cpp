#include <iostream>
#include <string>
#include "Intlist.h"

using namespace std;



int main() {


  //cout << "hello";
  IntList testList;
  cout << "Push Front tests:" << endl;
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
  cout << endl;

  cout << "Pop Front tests:" << endl;
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
  cout << endl;

  cout << "Push Back tests:" << endl;
  cout << "Push back 20" << endl;
  testList.push_back(20);
  cout << "testList: " << testList << endl;
  cout << "Push back 3" << endl;
  testList.push_back(3);
  cout << "testList: " << testList << endl;
  cout << "Push back 2" << endl;
  testList.push_back(2);
  cout << "testList: " << testList << endl;
  cout << endl;

  cout << "Pop Back tests:" << endl;
  cout << "Pop Back 2" << endl;
  testList.pop_back();
  cout << "testList: " << testList << endl;
  cout << "Pop Back 3" << endl;
  testList.pop_back();
  cout << "testList: " << testList << endl;
  cout << "Pop Back 20" << endl;
  testList.pop_back();
  cout << "testList: " << testList << endl;
  cout << endl;

  cout << "Is testList empty: " << endl;
  cout << testList.empty() << endl;
  cout << endl;

  cout << "Pop front 7" << endl;
  testList.pop_front();
  cout << "testList: " << testList << endl;
  cout << "Pop Back 5" << endl; 
  //free(): double free deteced in tcache 2. Aborted (core dumped)
  testList.pop_back();
  cout << "testList: " << testList << endl;
  cout << endl;

  cout << "Is testList empty: " << endl;
  cout << testList.empty() << endl;
  cout << endl;

  cout << "Conducting tests for testList2" << endl;
  IntList testList2;
  cout << "Is testList2 empty: " << endl;
  cout << testList.empty() << endl;
  cout << endl;

  cout << "Push back 20" << endl;
  testList.push_back(20);
  cout << "testList2: " << testList << endl;
  cout << "Push front 7" << endl;
  testList.push_front(7);
  cout << "testList2: " << testList << endl;
  cout << "Push back 10" << endl;
  testList.push_back(10);
  cout << "testList2: " << testList << endl;
  cout << "Push front 6" << endl;
  testList.push_front(6);
  cout << "testList2: " << testList << endl;
  cout << "Push back 11" << endl;
  testList.push_back(11);
  cout << "testList2: " << testList << endl;
  cout << "Push front 1" << endl;
  testList.push_front(1);
  cout << "testList2: " << testList << endl;
  cout << endl;

  cout << "testList2 in Reverse: " << endl;
  testList.printReverse();
  cout << endl;





  



  return 0;
}