#include<iostream>
#include<string.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    //creating hash
    int hash[26] = {0};
    for(int i=0; i<s.size(); i++){
        int idx = s[i] - 'a';
        hash[idx] += 1;
    }
    
    int q;
    cin >> q;
    while(q--) {
        char ch;
        cin >> ch;

        cout << hash[ch - 'a'] << endl;
    }

}