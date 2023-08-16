//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define MOD 1000000007
class Solution
{
    private:
    int solve(int n, int dp[])
    {
        if (n <= 1)
        return 1;

        if(dp[n] != -1)
        return dp[n];
        
        
        int Catalan = 0;
        
        for (int i = 0; i < n; i++)
        {
            Catalan= (Catalan + (1LL*(solve(i, dp)) * (solve(n - i - 1, dp)))%MOD)%MOD;
        }
        dp[n]=Catalan;
        
        return Catalan;
    }
    
    public:
    //Function to find the nth catalan number.
    int findCatalan(int n) 
    {
        //code here
        int dp[n+1];
        for(int i=0;i<n+1;i++)
        {
            dp[i]=-1;
        }
        
        dp[0]=dp[1]=1;
        
        return solve(n, dp);
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends