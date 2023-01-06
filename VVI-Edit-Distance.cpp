
//Leet Code Question 72
//VVI Asked in amazon interview
//Unoptimized using recursion

class Solution {
public:
    int solve(string a, string b, int i, int j) {
        //base
        if(i == a.length())
            return b.length() - j;
        if( j == b.length())
            return a.length() - i;
        
        if(a[i] == b[j] ) {
            //match
            return solve(a,b, i+1, j+1);
        }
        else {
            //no match
            int insertAns = 1 + solve(a,b,i,j+1);
            int replaceAns = 1 + solve(a,b,i+1,j+1);
            int deleteAns = 1 + solve(a,b,i+1,j);
            
            int finalAns = min(insertAns, min(replaceAns, deleteAns)) ;
            return finalAns;
        }
        
        
    }
    int minDistance(string word1, string word2) {
        return solve(word1, word2, 0, 0);
    }
};
