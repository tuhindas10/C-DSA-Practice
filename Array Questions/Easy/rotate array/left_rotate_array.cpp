#include<iostream>
using namespace std;

/*
    here TC = O(N)
         SC = O(1) as there is no extra space 
         but 
         if for solving this prob we use the given array 
         so if i take the given array in consideration 
         then SC = O(N)
*/

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    //left rotate array
    int temp = arr[0];
    int i = 0;
    while(i<n) {
        arr[i-1] = arr[i];
        i++;
    }

    arr[i-1] = temp;


    //print array
    for(auto it: arr) {
        cout << it << " ";
    }
    return 0;
}