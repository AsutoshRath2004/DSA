/*
     *
    ***
   *****
  *******
 *********   
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
        for (int j=i; j <= n-1; j++) {
            cout << " ";
        }
        for(int k = 1; k < 2*i; k++) {
            cout << "*";
        }
        cout << endl;
    }
}