#include <vector>
using namespace std;


//just like 121 except you are not finding maximum profit but simply adding total possible profit
//so there is actually no need to remember the smallest seen so far
//as long as there is profit to be made you can add the total
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
            if(prices[i] - small > 0)
            {
                prof += prices[i] - small;
                small = prices[i];
            }
        }
        return prof;
    }
};