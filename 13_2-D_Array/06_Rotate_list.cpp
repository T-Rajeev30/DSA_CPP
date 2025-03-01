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

        cout << endingCol << " "; 
        
        
            for (int  index = endingCol; index < startingCol; index++)

            {
                cout << matrix[index][index];
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
    return 0;
}
