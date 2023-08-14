//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    long long solve(int dice, int faces, int target, vector<vector<long long>>&dp)
    {
        if(target<0)
        return 0;
        
        if((dice==0 && target !=0) || (dice!=0 && target==0))
        return 0;
        
        if(dice==0 && target==0)
        return 1;
        
        if(dp[dice][target] != -1)
        return dp[dice][target];
        
        long long ans=0;
        for(int i=1;i<=faces;i++)
        {
            ans=ans+solve(dice-1, faces, target-i, dp);
        }
        dp[dice][target]=ans;
        
        return dp[dice][target];
    }
    
  public:
    long long noOfWays(int M , int N , int X) {
        // code here
        vector<vector<long long>>dp(N+1, vector<long long>(X+1, -1));
        return solve(N, M, X, dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int M,N,X;
        
        cin>>M>>N>>X;

        Solution ob;
        cout << ob.noOfWays(M,N,X) << endl;
    }
    return 0;
}
// } Driver Code Ends