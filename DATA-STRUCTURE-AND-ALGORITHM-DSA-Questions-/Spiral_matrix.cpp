// Spiral Matrix Problem

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int>ans;
        int count = 0; 
        int total = row*col;
        // indexes
        int startRow = 0, startCol = 0;
        int endRow = row - 1, endCol = col-1;
        while(count < total) {
            //print starting rpw
            for(int idx = startCol; count < total && idx <= endCol; idx++ ) {
                ans.push_back(matrix[startRow][idx]);
                count ++;
            }
            startRow++;
            //print ending column
            for(int idx = startRow; count < total && idx <= endRow; idx++ ) {
                ans.push_back(matrix[idx][endCol]);
                count++;
            }
            endCol--;
            //print ending row
            for(int idx = endCol; count < total && idx >= startCol; idx-- ) {
                ans.push_back(matrix[endRow][idx]);
                count++;
        }
             endRow--;
             //print starting column
              for(int idx = endRow; count < total && idx >= startRow; idx-- ) {
                ans.push_back(matrix[idx][startCol]);
                count++;
        }
        startCol++;
        }
        return ans;

    }
};