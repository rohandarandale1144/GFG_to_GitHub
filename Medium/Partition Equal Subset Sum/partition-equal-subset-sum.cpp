//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool solve(int idx, int arr[], int N, int target, vector<vector<int>>&dp)
    {
        if(idx>=N)
        return 0;
        
        if(target<0)
        return 0;
        
        if(target==0)
        return 1;
        
        if(dp[idx][target] != -1)
        return dp[idx][target];
        
        int include=solve(idx+1, arr, N, target-arr[idx], dp);
        int exclude=solve(idx+1, arr, N, target,dp);
        
        dp[idx][target]=include or exclude;
        
        return dp[idx][target];
    }
    
    
    int equalPartition(int N, int arr[])
    {
        // code here
        int total=0;
        int sum=accumulate(arr, arr+N, total);
        
        if(sum & 1)
        return 0;
        
        int target=sum/2;
        
        vector<vector<int>>dp(N, vector<int>(target+1, -1));
        
        return solve(0, arr, N, target, dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
// } Driver Code Ends