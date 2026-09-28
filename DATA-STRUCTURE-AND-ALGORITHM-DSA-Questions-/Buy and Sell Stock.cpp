best time to buy stock and sell it

#include <vector>
#include <algorithm>
#include <climits> // For INT_MAX

using namespace std;

int maxProfit(vector<int>& prices) {
    int min_price = INT_MAX; // Keep track of the lowest buying price
    int max_profit = 0;      // Keep track of the highest profit

    for (int i = 0; i < prices.size(); i++) {
        if (prices[i] < min_price) {
            // Update min_price if we find a cheaper day to buy
            min_price = prices[i];
        } else {
            // Calculate profit if we sold today, update max_profit if it's higher
            int current_profit = prices[i] - min_price;
            max_profit = max(max_profit, current_profit);
        }
    }

    return max_profit;
}

int main () {
    vector<int> arr = {3,5,8,7,9,1,10};
    buyStocks(arr, 7);
    
    return 0;
}