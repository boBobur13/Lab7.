#include <iostream>
#include <climits> 
using namespace std;
void updateMax(int x) {
  static int max = INT_MIN;
    if(x >max) {
        max =x; 
    }
    cout << "Max so far; " << max << endl;
}

int main() {
  updateMax(5);
   updateMax(10);
    updateMax(3);
  return 0;
}
