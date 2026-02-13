/**
 * NOTE: think the question more comprehensively
 * At first, I assume that the altitude is two prefix sums
 * But actually, the altitude is the prefix sum of the gain array
 */
#include "algorithm"
#include "vector"
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitudes(gain.size()+1);
        int prefix = 0;
        transform(
            gain.begin(), gain.end(), altitudes.begin()+1, [&prefix](int x){
                prefix += x;
                return prefix;
            }
        );
        
        return *max_element(altitudes.begin(), altitudes.end());
    }
};