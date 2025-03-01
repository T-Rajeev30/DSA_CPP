#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans; 

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0; 
        int total = row * col;
         
        // Index initialization 
        int startingRow = 0;
        int endingRow = row - 1;
        int startingCol = 0;
        int endingCol = col - 1;

        cout << "Initial Matrix:" << endl;
        for (const auto& r : matrix) {
            for (int num : r) cout << num << " ";
            cout << endl;
        }
        cout << endl;

        while (count < total) {
            // Traverse from left to right
            cout << "Traversing Top Row: ";
            for (int index = startingCol; count < total && index <= endingCol; index++) {
                cout << matrix[startingRow][index] << " ";
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            cout << endl;
            startingRow++;

            // Traverse from top to bottom
            cout << "Traversing Right Column: ";
            for (int index = startingRow; count < total && index <= endingRow; index++) {
                cout << matrix[index][endingCol] << " ";
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            cout << endl;
            endingCol--;

            // Traverse from right to left
            if (startingRow <= endingRow) {
                cout << "Traversing Bottom Row: ";
                for (int index = endingCol; count < total && index >= startingCol; index--) {
                    cout << matrix[endingRow][index] << " ";
                    ans.push_back(matrix[endingRow][index]);
                    count++;
                }
                cout << endl;
                endingRow--;
            }

            // Traverse from bottom to top
            if (startingCol <= endingCol) {
                cout << "Traversing Left Column: ";
                for (int index = endingRow; count < total && index >= startingRow; index--) {
                    cout << matrix[index][startingCol] << " ";
                    ans.push_back(matrix[index][startingCol]);
                    count++;
                }
                cout << endl;
                startingCol++;
            }
        }
        return ans;
    }
};

// **Main Function for Testing**
int main() {
    Solution sol;
    
    // Example Matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = sol.spiralOrder(matrix);

    // Print the Spiral Order Output
    cout << "\nFinal Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
