/**
 * sumTotal = sumLeft + sumRight + nums[pivot]
 */
#include "vector"
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumTotal = 0;
        for(int x: nums) sumTotal += x;

        int sumLeft = 0, sumRight = 0;
        for(int pivot=0; pivot < nums.size(); pivot++){
            sumTotal -= nums[pivot];
            sumRight = sumTotal;
            if (sumLeft == sumRight) return pivot;
            sumLeft += nums[pivot];
        }

        return -1;   
    }
};