#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int mostFrequentElement(vector<int>& nums) {
    unordered_map<int, int> mpp;
    for(int i=0; i<nums.size(); i++) {
        mpp[nums[i]]++;
    }

    int maxKey, maxVal = 0;

    for(auto it:mpp) {
        if(it.second > maxVal) {
            maxVal = it.second;
            maxKey = it.first;
        }else if(it.second == maxVal) {
            maxKey = min(it.first, maxKey);
        }
    }

    return maxKey;
}

int main() {
    vector<int> v = {5, 5, 4, 4, 6};
    int max = mostFrequentElement(v);
    cout << max << endl;
    return 0;
}