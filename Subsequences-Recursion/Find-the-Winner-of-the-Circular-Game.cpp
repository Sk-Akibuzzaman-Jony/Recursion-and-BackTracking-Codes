// LeetCode Problem 1823. Find the Winner of the Circular Game

/*
if we see at various examples we can notice a pattern 
i.e. -->

n = 4 , k = 2  --> and = 1
n = 5 , k = 2  --> and = 3
n = 6 , k = 2  --> and = 5
n = 7 , k = 2  --> and = 7

we can make a recursuve function solve(n,k) = (k+solve(n-1,k))%n

now modding makes the results between 0 to n-1
so to make the answers between 1 to n 
we add 1 to the final result..
*/

class Solution {
public:
    int solve(int n, int k) {
        if(n==1)
            return 0;
        return (k+solve(n-1,k))%n;
    }  
    int findTheWinner(int n, int k) {
        return solve(n,k)+1;   
    }
};
