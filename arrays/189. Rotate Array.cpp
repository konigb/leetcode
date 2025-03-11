#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

class Solution
{
public:
    void rotate(vector<int>& nums, int k) {
        // solution with O(n) memory, this takes the last element and push it to the front
        deque<int> res(nums.begin(),nums.end());
        int temp;
        while(k > 0)
        {
            temp = res.back();
            res.pop_back();
            res.push_front(temp);
            k -=1;
        }
        copy(res.begin(),res.end(),nums.begin());
    }
};