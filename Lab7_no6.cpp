#include <iostream>
using namespace std;
void reverseDigits(int &x){
    int y=0;
     while (x!=0){
        y= y*10+x%10;
          x=x/10;
    }
    x = y;
}
int main() {
    int x;
     cin>>x;
      reverseDigits(x);
       cout << x << endl;
  return 0;
}
