/**
 * Two pointers that point to the current character both need to be lower than the size of the string.
 * If they point to the same character, move both ot them to the next character.
 */
/**
 * NOTE: think the question more comprehensively
 * At first, I forget the both pointers should move together when they point to the same character.
 */

#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0, j=0;
        
        while(i<s.size() && j<t.size()){
            if(s[i] == t[j]) i++;
            j++;
        }
        return i==s.size();
    }
};