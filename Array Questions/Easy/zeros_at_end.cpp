#include<iostream>
using namespace std;

void zeroesToEnd(vector<int>& arr) {
    int st = 0, end = arr.size()-1;
    while(st <= end) {
        if(arr[st] == 0) {
            swap(arr[st], arr[end]);
            end--;
        }
        st++;
    }
}

int main() {
    vector<int> v = {0, 0, 0, 1, 3, -2};
    zeroesToEnd(v);

    for(auto it : v) {
        cout << it << " ";
    }

    return 0;
}