#include<iostream>
#include<vector>
using namespace std;


//brute force
vector<int> searchPositions(vector<int> &nums, int target) {
    int n = nums.size();
    int st=0, end=n-1;
    int first = -1, last = -1, count=0;
    for(int i=0; i<n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;
            count++;
        }
    }
    if(first != -1) last = first+count-1;
    return {first, last};
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    vector<int> ans = searchPositions(nums, 6);
    for(auto it:ans) {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}