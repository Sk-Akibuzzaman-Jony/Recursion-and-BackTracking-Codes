
//LeetCode -- Problem 486. Predict the Winner
/*

suppose we take an example 
[1,5,2]
now p1 has two options to pick i.e. -- 1 and 2;
now obviously p1 will pick 2 as he wants to win by gaining the max store
so he picks 2 
now p2 has the array [1,5] and he has two options 1 and 5 and now he picks 5 for obvious reasons
so now p1 has the array [1] so he picks 1 as t is the only element left in the array

so the score become -- 
p1 = 1+2 = 3
p2 = 5        so p2 wins

we are solving the problem in a different perspective in case of opt1 we assume that i is the greater element and p1 chooses that and p2 will choose 
in such a way such that p1 will get the smaller element during his turn

similarly for opt2 = if j is a greater element .......

*/

class Solution {
public:

    int solve(vector<int>& nums, int i , int j){
        if(i>j){
            return 0;
        }
        else if(nums.size() == 1){
            return nums[0];
        }
        int opt1 = nums[i] + min(solve(nums, i+2, j), solve(nums, i+1,j-1));
        int opt2 = nums[j] + min(solve(nums, i+1, j-1), solve(nums,i,j-2));

        return max(opt1, opt2);
    }
    bool PredictTheWinner(vector<int>& nums) {
        int p1 = solve(nums, 0, nums.size()-1);
        int totalScore = 0;
        for(int x : nums ){
            totalScore = totalScore+x;
        }
        int p2 = totalScore - p1;
        if(p1>=p2){return true;}
        else{return false;}
    }
};
