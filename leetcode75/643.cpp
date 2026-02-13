/**
 * the complexity of this solution is O(n)
 */
#include "vector"
using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        for(int i=0; i<k; i++) windowSum += nums[i];
        
        double maxSum = windowSum;
        for(int i=k; i<nums.size(); i++){
            windowSum += nums[i];
            windowSum -= nums[i-k];
            maxSum = max(windowSum, maxSum);
        }

        return maxSum/k;
    }
};