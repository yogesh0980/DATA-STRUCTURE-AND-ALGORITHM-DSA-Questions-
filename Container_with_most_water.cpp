class Solution {
public:
    int maxArea(vector<int>& height) {
        // Track the maximum water area found so far
        int maxWater = 0;
        int n = height.size();
        
        // Initialize two pointers: one at the start (left) and one at the end (right)
        int lp = 0, rp = n - 1;
        
        // Loop until the two pointers meet
        while (lp < rp) {
            // The width of the current container is the distance between the two pointers
            int wid = rp - lp;
            
            // The water level is limited by the shorter line, so find the minimum height
            int ht = min(height[lp], height[rp]);
            
            // Calculate the area of the current container
            int area = wid * ht;
            
            // Update maxWater if the current container holds more water
            maxWater = max(maxWater, area);
            
            // Move the pointer that points to the shorter line inward.
            // We do this because keeping the shorter line and moving the taller one 
            // will only decrease the width without increasing the possible height.
            if(height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        
        // Return the maximum area found after checking all potential containers
        return maxWater;
    }
};
