#include<iostream>
using namespace std;

void printLinear(int i, int n) {
    if(i > n ) return ;
    cout << i++ << endl;
    printLinear(i, n);
}

void print1toNBT(int i, int n) {
    if(i < 1) return ;

    print1toNBT(i-1, n);
    cout << i << endl;
}

void printNto1BT(int i, int n) {
    if(i > n) return;
    printNto1BT(i+1, n);
    cout << i << endl;
}

int main() {
    // printLinear(1, 5);
    // print1toNBT(4, 4);
    printNto1BT(1, 4);
    return 0;
}