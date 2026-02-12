#include "algorithm"
#include "vector"
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_val = *max_element(candies.begin(), candies.end());
        vector<bool> result(candies.size());
        transform(
            candies.begin(), candies.end(), result.begin(),[max_val, extraCandies](int x){
                if(x+extraCandies >= max_val){
                    return true;
                }
                return false;
            }
        );

        return result;
    }
};