class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if (mat.empty() || mat[0].empty()) return {};
       int m=mat.size();
       int n=mat[0].size();
       vector<int> ans(m*n); 
       int direction=1;
       int r=0,c=0;
      for (int i = 0; i < m * n; i++) {
            ans[i] = mat[r][c];
            
            if (direction == 1) {
                if (c == n - 1) {
                    r++;        
                    direction = -1; 
                } else if (r == 0) {
                    c++;          
                    direction = -1; 
                } else {
                    r--;         
                    c++;
                }
            } else {
                if (r == m - 1) {
                    c++;          
                    direction = 1; 
                } else if (c == 0) {
                    r++;          
                    direction = 1;  
                } else {
                    r++;   
                    c--;      
                }
            }
        }
    return ans;
    }
};