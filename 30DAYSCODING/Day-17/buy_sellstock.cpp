#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minimum = INT_MAX;
    int maximum = 0;

    for (int price : prices) {
    
        if (price < minimum) {
            minimum = price;
        }
       
        else if (price -  minimum  > maximum) {
            maximum= price -  minimum ;
        }
    }

    return maximum;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);  // Output: 5
}