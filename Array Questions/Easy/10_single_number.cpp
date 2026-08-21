#include<iostream>
using namespace std;

int singleNumber(vector<int>& nums){
        //your code goes here
        int XOR = 0;
        for(int i=0; i<nums.size(); i++) {
            XOR = XOR ^ nums[i];
        }

    return XOR;
}

int main() {

    return 0;
}