#include <iostream>
using namespace std;
int value=10;
 void fun() {
  int value=5;
    cout<<"FUN: " <<value<<endl;
}
int main() {
    int value = 3;
     cout <<value<<endl;
      fun();
       cout <<(::value) <<endl;
 return 0;
}
