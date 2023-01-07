#include<bits/stdc++.h>
using namespace std;

void printMatrix(vector<vector<int>>& matrix, int m, int n) {
    cout << "your matrix is:->" << endl;
    for(int i = 0; i < m; i++) {
        cout << "[ ";
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "]" << endl;
    }
}

void TransPose(vector<vector<int>>& matrix, int m, int n) {
    vector<vector<int>> mask;
    for(int col = 0; col < n; col++) {
        vector<int> v;
        for(int row = 0; row < m; row++) {
            v.push_back(matrix[row][col]);
        }
        mask.push_back(v);
    }
    matrix = mask;
}

int main() {
    int m, n;
    cout << "Enter the size of your row" << endl;
    cin >> m;
    cout << "Enter the size of your coloumns" << endl;
    cin >> n;
    vector<vector<int>> matrix;
    cout << "Enter your matrix elements" << endl;
    for(int i = 0; i < m; i++) {
        vector<int> v;
        for(int j = 0; j < n; j++) {
            int ele;
            cin >> ele;
            v.push_back(ele);
        }
        matrix.push_back(v);
    }
    cout << "Initial matrix" << endl;
    printMatrix(matrix, m, n);

    TransPose(matrix, m, n);

    cout << "Transposed matrix" << endl;
    printMatrix(matrix, m, n);
    return 0;
}