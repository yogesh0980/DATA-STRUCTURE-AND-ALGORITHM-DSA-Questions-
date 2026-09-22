// Water container question


class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        int lp = 0, rp= n-1;
        while (lp<rp) {
            int wid = rp - lp;
            int ht = min(height[lp], height[rp]);
            int area = wid*ht;
            maxWater = max (maxWater, area);
            if(height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        
        }
        return maxWater;
    }
};
