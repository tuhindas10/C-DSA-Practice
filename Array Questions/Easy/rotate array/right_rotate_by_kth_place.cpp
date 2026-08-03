#include<iostream>
#include<vector>
using namespace std;

void rightRotate(vector<int>& arr, int k) {
    k = k % arr.size();
    while(k--) {
        int lastElement = arr.size() - 1;
        int temp = arr[lastElement];

        for(int i=arr.size()-2; i>=0; i--) {
            arr[i+1] = arr[i];
        }

        arr[0] = temp;
    }
}


int main() {
    vector<int> v = {-1,-100,3,99};
    int k = 2;
    rightRotate(v, k);

    for(auto it : v) {
        cout << it << " ";
    }

    return 0;
}