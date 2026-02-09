/**
 * The strategy is adding the elements to the empty string is like push the elements into the stack
 * While loop: use the condition to decide whether to breakthe loop or not
 * For loop: use times to decide whether to break the loop or not 
 */
# include "string"
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string outputString;
        outputString.reserve(word1.length() + word2.length());
        int i=0, j=0;
        
        while ((i<word1.length()) || (j<word2.length()))
        {
            /* code */
            if(i<word1.length()) outputString.push_back(word1[i++]);
            if(j<word2.length()) outputString.push_back(word2[j++]);
        }
        
        return outputString;
    }
};