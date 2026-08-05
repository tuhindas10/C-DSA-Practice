//Rotate the given matrix by 90 degree
#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    int row = matrix.size();
    int col = matrix[0].size();

    int trans[col][row];

    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            trans[j][i] = matrix[i][j];
        }
    }

    for(int i=0; i<col; i++) {
        for(int j=0; j<=row/2; j++) {
            swap(trans[i][j], trans[i][row-j-1]);
        }
    }

    for(int i=0; i<col; i++) {
        for(int j=0; j<row; j++) {
            cout << trans[i][j] << " ";
        }
        cout << "\n";
    }

}

int main() {
    vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(v);
}