#include<iostream>
using namespace std;

void printName(int i, int n) {
    if(i > n) return;
    cout << "Tuhin Das\n";
    i++;
    printName(i, n);
}

int main() {
    int n = 4;
    printName(1, n);
    return 0;
}