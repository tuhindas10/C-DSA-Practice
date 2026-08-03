#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int number;
        cin >> number;
        v.push_back(number);
        
    }
    
    //storing
    unordered_map<int, int> mpp;
    for(int i=0; i<v.size(); i++) {
        mpp[v[i]]++;
    }


    //fetching
    for(auto it:mpp) {
        cout << it.first << " -> " << it.second << endl;
    }


    return 0;
}