// check if the array is sorted or not

#include <bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> a) {
    // Write your code here.
    int flag = 1;

    for(int i = 0; i<n-1; i++) {
        for(int j = i+1; j<n; j++) {
            if(a[j] < a[i]) {
                flag = 0;
                break;
            }
        }
    }
    return flag;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    cout << isSorted(n, arr) << endl; // Output: 1 (sorted)
    
    vector<int> arr2 = {5, 4, 3, 2, 1};
    n = arr2.size();
    cout << isSorted(n, arr2) << endl; // Output: 0 (not sorted)
    
    return 0;
}