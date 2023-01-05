//LeetCode --> 1691. Maximum Height by Stacking Cuboids 
// unoptimised Version using recursion only
// will give TLE in leetCode

#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isSafe(vector<vector<int>>& cuboids, int curr, int prev){
   if ( cuboids[curr][0] <= cuboids[prev][0] && 
        cuboids[curr][1] <= cuboids[prev][1] && 
        cuboids[curr][2] <= cuboids[prev][2])
   {
        return true;
   }
   return false;   
}

int solve(vector<vector<int>>& cuboids, int prev, int curr){
    //base case 
    if (curr < 0)
    {
        return 0;
    }

    //inclusive
    int inclusive = 0;
    if (prev == -1 || isSafe(cuboids, curr, prev))
    {
        inclusive = cuboids[curr][2] + solve(cuboids, curr, curr-1);
    }
    //exclusive
    int exclusive = solve(cuboids, prev, curr-1);
    return max(inclusive, exclusive);
    
}

int maxHeight(vector<vector<int>>& cuboids) {
        //sorting inner elements
        for (auto& x : cuboids)
        {
            sort(x.begin(), x.end());
        }

        //sorting all first elements
        sort(cuboids.begin(), cuboids.end());

        return solve(cuboids, -1, cuboids.size()-1);
        
    }

int main(){
    vector<vector<int>> cuboids
    {    
    {50,45,20},
    {95,37,53},
    {45,23,12}
    };
}
