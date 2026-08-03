#include<iostream>
#include<vector>
using namespace std;

int largestElement(vector<int> &arr) {
    int largest = arr[0];
    for(int i=1; i<arr.size(); i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    return largest;
}

int main() {
    vector<int> v = {3, 3, 6, 1};
    cout << largestElement(v);
}