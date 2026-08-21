#include<iostream>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int currentCount = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] == 1) {
                currentCount++;
            }else {
                maxCount = max(maxCount, currentCount);
                currentCount = 0;
            }
        }

    return maxCount;
}

int main() {

    return 0;
}