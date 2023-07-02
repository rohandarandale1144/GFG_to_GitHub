//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
    private:
    int f(int idx, int *arr, vector<int>&dp)
    {
        if(idx==0)
        return arr[0];
        
        if(idx<0)
        return 0;
        
        if(dp[idx]!=-1)
        return dp[idx];
        
        int pick=arr[idx] + f(idx-2, arr, dp);
        int notPick=0 + f(idx-1, arr, dp);
        
        return dp[idx]=max(pick, notPick);
    }
    
public:	
	// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    // code here
	    vector<int>dp(n, -1);
	    return f(n-1, arr, dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends