//{ Driver Code Starts
// Counts Palindromic Subsequence in a given String
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    const int MOD=1000000007;
    private:
    long long int solve(string &s, int i, int j, vector<vector<long long int>>&dp){
        if(i==j){
            return 1;
        }
        if(i>j){
            return 0;
        }
        if(dp[i][j]!= -1){
            return dp[i][j];
        }
        if (s[i] == s[j]) {
            dp[i][j] = (1 + solve(s, i + 1, j, dp) + solve(s, i, j - 1, dp)) % MOD;
        } else {
            dp[i][j] = (solve(s, i + 1, j, dp) + solve(s, i, j - 1, dp) - solve(s, i + 1, j - 1, dp) + MOD) % MOD;
        }

        return dp[i][j];
    }
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       //Your code here
       int n=str.size();
       vector<vector<long long int>>dp(n, vector<long long int>(n, -1));
       return solve(str, 0, n-1, dp);
    }
     
};

//{ Driver Code Starts.
// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        Solution ob;
        long long int ans = ob.countPS(str);
        cout<<ans<<endl;
    } 
}
// } Driver Code Ends