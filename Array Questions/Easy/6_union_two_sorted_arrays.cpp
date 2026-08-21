#include<iostream>
#include<vector>
using namespace std;

vector<int> unionOfTwoSortedArrays(vector<int>& num1, vector<int>& num2) {
    vector<int> unionVec;
    int i = 0, j = 0;

    return unionVec;
}

int main() {
    vector<int> num1 = {1, 2, 3, 4, 5};
    vector<int> num2 = {1, 2, 7};

    vector<int> Union = unionOfTwoSortedArrays(num1, num2);
    for(auto it : Union) {
        cout << it << " ";
    }

    return 0;
}