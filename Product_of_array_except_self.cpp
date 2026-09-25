
// product of array except self

#include <bits/stdc++.h>
using namespace std;

void productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int prefix=1;
        for(int i=0; i<n; i++) {
            ans[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for (int i =n-1; i>=0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }
        for (int num : ans) {
            cout << num << " ";
        }
    }

    int main () {
        vector<int> nums = {1,2,3,4};
        productExceptSelf(nums);
        return 0;
    }
