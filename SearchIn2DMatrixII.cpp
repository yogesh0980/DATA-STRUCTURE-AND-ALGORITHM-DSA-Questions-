class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
     int rows=matrix.size();
     int cols=matrix[0].size();
     int stRow=0;
     int stCols=cols-1;
     while(stRow<rows && stCols>=0){
       if(matrix[stRow][stCols]==target){
        return true;
       }
       else if(matrix[stRow][stCols]>target){
        stCols--;
       }
       else{
        stRow++;
       }
     }
     return false;
    }
};