#include<iostream>
using namespace std;

int longestSubarray(vector<int> &nums, int k){
    int maxCount = 0;
    for(int i=0; i<nums.size(); i++) {
    int count = 0;
    int sum = 0;
        for(int j=i; j<nums.size(); j++) {
            if(sum == k) {
                maxCount = max(maxCount, count);
                break;
            }
            sum += nums[j];
            count++;
        }
    }

    return maxCount;
}

int main() {

    return 0;
}