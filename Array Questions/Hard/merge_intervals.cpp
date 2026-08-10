#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    int r = intervals.size();
    int c = intervals[0].size();
    int st = intervals[0][0];
    int end = intervals[0][1];

    for(int i=1; i<r; i++) {
        if(intervals[i][0] <= end){
            end = max(intervals[i][1], end);
        }else {
            ans.push_back({st, end});
            st = intervals[i][0];
            end = intervals[i][1];
        }
    }
    ans.push_back({st, end});
    return ans;
}

int main() {
	// vector<int> v = {};
	return 0;
}