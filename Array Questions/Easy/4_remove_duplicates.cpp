#include<iostream>
#include<vector>
#include<set>
using namespace std;

//brute force
void removeDuplicatesBF(vector<int>& nums) {
    set<int> st;
    for(int i=0; i<nums.size(); i++) { //stores unique numbers to set
        st.insert(nums[i]);
    }
    int i = 0;
    for(auto it : st) {
        nums[i] = it;
        i++;
    }
}

//two pointer approach
int removeDuplicateOptimal(vector<int>& nums) {

    int i=0;
    for(int j=1; j<nums.size(); j++) {
        if(nums[j] != nums[i]) {
            nums[i+1] = nums[j];
            i++;
        }
    }

    return i+1;
}

void print(vector<int>& nums) {
    for(auto it: nums) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {
    vector<int> v = {0, 0, 3, 3, 5, 6};
    print(v);
    // removeDuplicatesBF(v);
    removeDuplicateOptimal(v);
    print(v);
    return 0;
}