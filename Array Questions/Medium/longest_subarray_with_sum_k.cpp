#include<iostream>
using namespace std;

int longSubSum(vector<int>& nums, int k) {
    int n = nums.size();
    int longest = 0;
    int sum = 0;
    int j = 0;
    for(int i=0; i<n; i++) {
        sum += nums[i];
        if(sum == k) {
            int currLen = i - j + 1;
            longest = max(currLen, longest);
        }else if(sum > k) {
            sum -= nums[j];
            j++;
        }
    }

    return longest;
}

int main() {
    vector<int> v = {10, 5, 2, 7, 1, 9};
    int k = 15;
    int longestSum = longSubSum(v, k);
    cout << longestSum << endl;
    return 0;
}