best time to buy stock and sell it

#include <bits/stdc++.h>
using namespace std;

void buyStocks(vector<int> &arr, int n) {
    
    int MaxProfit = 0;
    int bestBuy = arr[0];
    for (int i =1; i<n; i++) {
        if (arr[i] > bestBuy) {
            MaxProfit = max(MaxProfit, arr[i]-bestBuy);
        }
        bestBuy = min(bestBuy, arr[i]);

    }
   cout << MaxProfit << endl;
}

int main () {
    vector<int> arr = {3,5,8,7,9,1,10};
    buyStocks(arr, 7);
    
    return 0;
}