#include <iostream>
using namespace std;
void power_two(int &x) {
    x= x*x;
}
int main() {
    int x=2;
     power_two(x);
      cout<<"x^2= " << x << endl;
    return 0;
}
