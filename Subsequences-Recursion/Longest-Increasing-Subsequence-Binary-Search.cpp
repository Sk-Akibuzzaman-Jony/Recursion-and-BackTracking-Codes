
//LeetCode Question 300. Longest Increasing Subsequence


#include <iostream>
#include <vector>
#include <string>
#include <algorithms>
using namespace std;


int lengthOfLIS(vector<int> &nums)
{

    vector<int> sol;
    for(int x : nums)
    {
        if (sol.empty() || sol[sol.size()-1]<x)
        {
            sol.push_back(x);
        }
        else
        {
            auto it = lower_bound(sol.begin(), sol.end(), x);
            *it = x;
        }    
    }
    return sol.size();   
}

int main(){
    
}
