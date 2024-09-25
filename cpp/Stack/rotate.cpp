#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<vector<int>> &arr) {
    int rows = arr.size();
    int cols = arr[0].size();

    for (int i = 0; i < cols; i++) {
        for (int j = rows - 1; j >= 0; j--) {
            cout << arr[j][i] << " ";
        }
        
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4,5, 6,},
        {7, 8,9},
        
    };

    rotate(matrix);

    return 0;
}
