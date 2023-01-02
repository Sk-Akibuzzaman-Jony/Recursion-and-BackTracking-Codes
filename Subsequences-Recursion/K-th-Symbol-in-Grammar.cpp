
//LeetCode Question 779. K-th Symbol in Grammar

/*
if we look it in a graohical wahy then 
      0
     / \
    /   \
   0     1
  / \   / \
 0   1 1   0
 and soo on 
 
 we can observe that if k is odd the the ans lies in the left side of the tree and if it is even it lies in the right side of the parent
 
 we also observe that the parent is always present at position n-1, k/2+k%2 
 
 so we send a recursive call to find out the parent .....
*/

class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1)
            return 0;
        int parent = kthGrammar(n-1, k/2+k%2);
        if(parent == 0){
            if(k%2 == 0){return 1;}
            else{return 0;}
        }
        else{
           if(k%2 == 0){return 0;}
            else{return 1;} 
        }    
    }
};
