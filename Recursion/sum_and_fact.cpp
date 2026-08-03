#include<iostream>
using namespace std;

int sumOfNat(int i, int sum) {
    if(i < 1) {
        cout << sum;
        return sum;
    }
    sum += i;
    sumOfNat(i-1, sum);
}

int fact(int i) {
    if(i == 1) return i;
    return i * fact(i-1);
} 

int main() {
    // sumOfNat(4, 0);
    cout << fact(4) << endl;
    return 0;
}