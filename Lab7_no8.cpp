#include <iostream>
using namespace std;
int sum_numbers(int n) {
    if (n==0) {
        return 0;
    }
    return sum_numbers(n-1)+n; 
}
int main() {
    cout <<sum_numbers(1)<<endl;
   return 0;
}
