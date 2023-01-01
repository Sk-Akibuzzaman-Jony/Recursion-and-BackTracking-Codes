#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solve(string text1, string text2, int i, int j)
{
    if (i == text1.length() || j == text2.length())
    {
        return 0;
    }
    int a = 0;
    if (text1[i] == text2[j])
    {
        a = 1 + solve(text1, text2, i + 1, j + 1);
    }

    else
    {
        a = max(solve(text1, text2, i + 1, j), solve(text1, text2, i, j + 1));
    }
    return a;
}

int longestCommonSubsequence(string text1, string text2)
{
    return solve(text1, text2, 0, 0);
}

int main()
{
    string text1 = "abcde", text2 = "ace";
    cout << longestCommonSubsequence(text1, text2);
}
