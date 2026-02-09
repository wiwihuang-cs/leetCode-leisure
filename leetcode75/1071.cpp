/**
 * In the question, "t devides s" means s = t+t+...+t
 * so, first, assume x devides str1 and str2, then str1 = x+x+...+x and str2 = x+x+...+x
 * then, str1 + str2 = x+x+...+x + x+x+...+x = str2 + str1
 * Second, str1 = x+x+...+x, so str1 = qx, and str2 = px
 * then, the greatest common divisor must be x*(gcd(p, q))
 * Finally, because str1 = x+x+...+x and gcdOfString must be x*u, so I use .substr() 
 */
# include "numeric"
# include "string"
using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if ((str1 + str2)!= (str2 + str1)) return "";
        int qx = str1.length(), px = str2.length();
        int gcdOfQxAndPx = gcd(px, qx);
        return str1.substr(0, gcdOfQxAndPx);
    }
    
};