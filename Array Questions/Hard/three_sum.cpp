// 3 sum

#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    int n = nums.size();
    set<vector<int>> ans;

    for(int i=0; i<n; i++) {
        set<int> st;
        for(int j=i+1; j<n; j++) {
            int k = -(nums[i] + nums[j]);
            if(st.find(k) != st.end()) {
                vector<int> temp = {k, nums[i], nums[j]};
                sort(temp.begin(), temp.end());
                ans.insert(temp);
            }
            st.insert(nums[j]);
        }
    }

    vector<vector<int>> ts(ans.begin(), ans.end());
    return ts;
}

int main() {
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(v);

    for(auto it : ans) {
        for(auto i : it) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;  
}