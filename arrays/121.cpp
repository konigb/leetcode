#include <vector>
using namespace std;


//This is tagged as dynamic programming
//This is making use of the sliding window technique to solve this problem
//Basically keep track of the smallest number sceen so far and calculate the profit as you go along
class Solution
{
public:
    int maxProfit(vector<int>& prices) {
        int prof = 0;
        int small = prices[0];
        for(int i = 0; i < prices.size(); i++)
        {
            if(prices[i] < small)
            {
                small = prices[i];
            }
            if(prices[i]-small > prof)
            {
                prof = prices[i]-small;
            }
        }
        return prof;
    }
};