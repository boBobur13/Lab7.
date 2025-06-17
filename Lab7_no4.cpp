#include <iostream>
using namespace std;
void swap(int &a, int &b) {
   a = a+b; //8
    b = a-b; //8-3=5
     a = a-b; //8-5=3
}
int main() {
  int a =5, b =3;
    cout << "a= " << a << ",b= " <<b<< endl; // before Swap
     swap(a, b);
    cout << "a= " << a << ",b= " <<b<< endl; // after swap
    return 0;
}
