#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;

    while(left <= mid && right<=high) {
        if(v[left] <= v[right]) {
            temp.push_back(v[left]);
            left++;
        }else {
            temp.push_back(v[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(v[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(v[right]);
        right++;
    }

    for(int i=low; i<=high; i++) {
        v[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& v, int low, int high) {
    if(low >= high) return;

    int mid = (low + high) / 2;
    //left
    mergeSort(v, low, mid);

    //right
    mergeSort(v, mid+1, high);

    //merging
    merge(v, low, mid, high);
}

void print(vector<int>& v) {
    for(int i=0; i<v.size(); i++) {
        cout << v[i] << " ";
    }
}

int main() {
    vector<int> vec = {2, 1, 3, 1, 4, 2};
    print(vec);
    cout << "\n";

    mergeSort(vec, 0, vec.size()-1);

    print(vec);
    cout << "\n";

    return 0;   
}