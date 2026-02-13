/**
 * In the description of the problem, it says "move all 0's to the end of the sequence"
 * So, it's the same as "move all non-0's to the front of the sequence"
 * Because if we "move all 0's to the end of the sequence" with swap,
 * It will cause the order of non-0's to be changed
 */
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=0;
        for(int i=0; i<(int)nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[n]);
                n++;
            }
        }
    }
};