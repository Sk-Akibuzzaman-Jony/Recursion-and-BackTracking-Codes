//LeetCode Question 390. Elimination Game
//Deriving the formula of the recursive relation
/*
For eg -- 
[1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [2, 4, 6, 8]
arr = [2, 6]
arr = [6]

we can see that every time the array size gets halfed and to reverse the array we are subtracting (1+n/2)
Do a dry run to understand it..
*/

class Solution {
public:
    int lastRemaining(int n) {
        if(n==1)
        return 1;

        return 2*(1+(n/2)-lastRemaining(n/2));
    }
};
