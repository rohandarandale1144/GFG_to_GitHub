//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    private:
    
    int solve(int capacity, int wt[], int val[], int idx, vector<vector<int>>&dp)
    {
        if(idx==0)
        {
            if(wt[0] <= capacity)
            {
                return val[0];
            }
            else
            {
                return 0;
            }
        }
        
        int include=0, exclude=0;
        
        if(dp[idx][capacity] != -1)
        {
            return dp[idx][capacity];
        }
        
        if(wt[idx] <= capacity)
        {
            include=val[idx] + solve(capacity-wt[idx], wt, val, idx-1, dp);
        }
        
        exclude=0 + solve(capacity, wt, val, idx-1, dp);
        
        dp[idx][capacity]=max(include, exclude);
        
        return dp[idx][capacity];
    }
    
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       vector<vector<int>>dp(n, vector<int>(W+1, -1));
       return solve(W, wt, val, n-1, dp);
    }
};

//{ Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends