#include <bits/stdc++.h>
using namespace std;
// Function to find the second largest element in an array
// arr: input array
// n: size of the array
// Return the second largest element in the array
// If there is no second largest element, return -1

int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest = arr[0];
    int slargest = INT_MIN;

    for(int i = 0; i<n; i++) {
        if(arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest) {
            slargest = arr[i];
        }
    }
    if(slargest == INT_MIN)
    return -1;
    else 
    return slargest;
}