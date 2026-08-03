#include<iostream>
#include<vector>
using namespace std;

bool checkArraySorting(vector<int> &arr) {
    int st = 0;
    int end = 1;
    while(end <= arr.size()) {
        if(arr[st] > arr[end]) {
            return false;
        }
        end++; st++;
    }

    return true;
}

int main() {
    vector<int> v = {1, 2, 2, 4, 5};
    cout << checkArraySorting(v) << endl;
    return 0;
}