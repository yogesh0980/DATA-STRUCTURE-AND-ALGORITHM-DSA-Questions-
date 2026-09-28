//Rotate array by reverse the array:-
class Solution {
private: 
    void reverse(vector<int>& nums, int l,int r){
        while(l<=r){
        swap(nums[l],nums[r]);
        l++;
        r--;
     }
    }
public:
    void rotate(vector<int>& nums, int k) {
      if (nums.size() <= 1) {
            return;
        }
        k = k % nums.size();
        if (k == 0) {
            return;
        }
      reverse(nums,0,nums.size()-1);
      reverse(nums,0,k-1);
      reverse(nums,k,nums.size()-1);
    }
};