#include<iostream>
#include<vector>
#include<limits>
using namespace std;

int secondLargestElement(vector<int> &arr) {
    int large = arr[0];
    int slarge = INT_MIN;

    for(int i = 0; i<arr.size(); i++) {
        if(arr[i] > large) {
            slarge = large;
            large = arr[i];
        }else if(arr[i] > slarge && arr[i] != large) {
            slarge = arr[i];
        }
    }

    return slarge;

}

int main() {
    vector<int> v = {9, 8, 7, 6, 5};
    cout << secondLargestElement(v) << endl; 
}