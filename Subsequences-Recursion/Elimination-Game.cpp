//LeetCode Question 390. Elimination Game
//Deriving the formula of the recursive relation
/*
For eg -- 
[1, 2, 3, 4, 5, 6, 7, 8, 9]
arr = [2, 4, 6, 8]
arr = [2, 6]
arr = [6]

Taking the First Case -- [1, 2, 3, 4, 5, 6, 7, 8, 9]
First we have to eliminate from left to right
--->> f(n(L->R)) = [2, 4, 6, 8] = 2*[1,2,3,4] -- (2*n/2)
Now here we have to traverse from 
--->> f(n(L->R)) = [2, 4, 6, 8] = 2*[1,2,3,4] -- [2*(1,2,3---,n/2)]
subtracting (1+n/2) to reverse it 
----> f(n(L->R)) = [2, 4, 6, 8] = 2*[1,2,3,4] -- [2*(1,2,3---,n/2)] = [2*(1+n/2-1,1+n/2-2---,1+n/2-n/2)] -- [2*(n/2,--,3,2,1)] 
now we can eleminate from left to right as the array has been reversed 

so the recursive function becomes -- 

f(n(Left->Right)) = 2*[1+(n/2)-f(n/2(Left->Right))];

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
