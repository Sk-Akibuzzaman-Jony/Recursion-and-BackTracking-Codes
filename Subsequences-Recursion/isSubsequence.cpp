
//LeetCode Quesion

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int solve(int i, int j, string& s, string& t){
        if (i == 0 || j == 0)
        {
            return 0;
        }
        else
        {
            if (s[i-1] == t[j-1])
            {
                return 1+solve(i-1,j-1,s,t);
            }
            else
            {
                return solve(i,j-1,s,t);
            }
        }
        
        
    }
    bool isSubsequence(string s, string t) {
        if (s.length() == solve(s.length(), t.length(), s,t))
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
    }
};
