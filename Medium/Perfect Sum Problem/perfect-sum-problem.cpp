//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int mod=1e9+7;
class Solution{
    private:
    int find(int arr[], int n, int target, vector<vector<int>>&dp)
    {
        if(n < 0)
        return target==0;
        
        if(dp[n][target] != -1)
        {
            return dp[n][target];
        }
        
        int include=(target-arr[n] >=0) ? find(arr, n-1, target-arr[n], dp) : 0;
        
        int exclude=find(arr, n-1, target, dp);
        
        return dp[n][target]=(include + exclude)%mod;
    }

	public:
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return find(arr, n-1, sum, dp);
	}
	  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends