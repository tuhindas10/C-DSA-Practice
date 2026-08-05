#include<iostream>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size();
    int st = 0;
    int end = n-1;
    while(st <= end) {
        int mid = (st + end) / 2;

        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) {
            st = mid + 1;
        }else {
            end = mid - 1;
        }
    }

    return -1;
}

int main() {
    vector<int> v = {-1,0,3,5,9,12};
    int k = 9;
    int idx = binarySearch(v, k);
    cout << idx << endl;
}