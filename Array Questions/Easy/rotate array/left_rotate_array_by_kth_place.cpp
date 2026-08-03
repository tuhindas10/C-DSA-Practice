#include<iostream>
#include<vector>
using namespace std;

//TC & TS wise not efficient
// void rotateArraybyKthplace(vector<int>& arr, int k) {
//     while(k--) {
//         int temp = arr[0];

//         for(int i=0; i<arr.size(); i++) {
//             arr[i-1] = arr[i];
//         }

//         arr[arr.size() - 1] = temp;
//     }
// }

void rotateArraybyKthplace(vector<int>& arr, int k) {
    k = k % arr.size();

    reverse(arr.begin(), arr.begin()+k-1);
    reverse(arr.begin()+k, arr.end()-1);
    reverse(arr.begin(), arr.end()-1);

}  

int main() {

    vector<int> v = {1, 2, 3, 4, 5};
    int n = 2;
    rotateArraybyKthplace(v, n);

    for(auto it : v) {
        cout << it << " ";
    }

    return 0;
}