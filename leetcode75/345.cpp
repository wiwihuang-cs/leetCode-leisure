/**
 * Pay more attention to (while(font<rear && !isVowel(s[font])) font++;)
 * If we don't check font<rear in the nested while loop, it may exchange back again
 * For example, "leetcode" -> "leotcede" -> "leetcode"
 */
#include <string>
using namespace std;

class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return (c=='a') || (c=='e') || (c=='i') || (c=='o') || (c=='u');
    }
    string reverseVowels(string s) {
        int size = s.size();
        int font = 0, rear = size-1;

        while(font < rear){
            while(font<rear && !isVowel(s[font])) font++;
            while(font<rear && !isVowel(s[rear])) rear--;

            swap(s[font], s[rear]);
            
            font++;
            rear--;
        }

        return s;
    }
};