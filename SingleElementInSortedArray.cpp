class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
      int st=0;
      int end=nums.size()-1;
      int n= nums.size();
      if(nums.size()==1) return nums[0];
      while(st<=end){
        int mid=st+(end-st)/2;
   
    if(mid==0&&nums[0]!=nums[1]) return nums[mid];
    if(mid==n-1&&nums[n-1]!=nums[n-2]) return nums[mid]; 
   
    if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]){
        return nums[mid];
    }
    if(mid%2==0){
        if(nums[mid]==nums[mid-1]){
            end=mid-1;
        } else{
            st=mid+1;
        }
    } else{
        if(nums[mid]==nums[mid-1]){
            st=mid+1;
        } else{
         end=mid-1;
        }
    }
      }
      return -1;  
    }
};