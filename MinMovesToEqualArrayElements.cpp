//Formula Used: 
// moves= sum of all the elements - array_size*min(array)
class Solution {
public:
    int minMoves(vector<int>& nums) {
       int sum=0;
       int minimum=INT_MAX;
       for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        minimum=min(minimum,nums[i]);
       }
       return sum-nums.size()*minimum;
    }
};