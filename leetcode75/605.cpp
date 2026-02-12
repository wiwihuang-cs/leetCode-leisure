/**
 * 1. Pay more attention to (int left = (i==0) ? 0:flowerbed[i-1];) and (int right = (i==(size-1)) ? 0:flowerbed[i+1];)
 * 2. Pay more attention to (return n==0;)
 */
#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        for(int i=0;i<size && n>0; i++){
            if(flowerbed[i]==1) continue;
            
            int left = (i==0) ? 0:flowerbed[i-1];
            int right = (i==(size-1)) ? 0:flowerbed[i+1];

            if((left==0) && (right==0)){
                flowerbed[i]=1;
                n--;
            }
        }

        return n==0;
    }
};