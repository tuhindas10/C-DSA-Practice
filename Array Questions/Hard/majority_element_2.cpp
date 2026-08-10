#include<iostream>
#include<map>
using namespace std;

//better approach

// vector<int> majorityElement(vector<int>& nums){
//     map<int, int> mpp;
//     vector<int> ans;
//     int n = nums.size();

//     for(int i=0; i<n; i++) {
//         mpp[nums[i]]++;
//         if(mpp[nums[i]] == (n/3 + 1)) {
//                 ans.push_back(nums[i]);
//         }
//         if(ans.size() == 2) break;
//     }

//     return ans;
// }

//optimal approach
vector<int> majorityElement(vector<int>& nums){
    int n = nums.size();
    int count1 = 0, ele1 = 0;
    int count2 = 0, ele2 = 0;
    vector<int> ans;

    for(int i=0; i<n; i++) {
        if(count1 == 0 && nums[i] != ele2) {
            ele1 = nums[i];
            count1++;
        }else if(count2 == 0 && nums[i] != ele1) {
            ele2 = nums[i];
            count2++;
        }else if(ele1 == nums[i]) count1++;
        else if(ele2 == nums[i]) count2++;
        else{
            count1--; count2--;
        }
    }

    int c1 = 0, c2 = 0;
    for(int i=0; i<n; i++) {
        if(ele1 == nums[i]) c1++;
        else if(ele2 == nums[i]) c2++;
    }
    if(c1 > n/3) ans.push_back(ele1);
    if(c2 > n/3) ans.push_back(ele2);

    return ans;

    return ans;
}

int main() {
	vector<int> v = {};
	return 0;
}