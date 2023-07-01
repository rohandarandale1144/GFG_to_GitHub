//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& height, int n, int k) {
        // Code here
        vector<int>dp(n+1, 0);
        dp[0]=0;
        
        for(int i=1;i<n;i++)
        {
            int mini=INT_MAX;
            for(int j=1;j<=k;j++)
            {
                if(i-j>=0)
                {
                    int jump=dp[i-j]+abs(height[i]-height[i-j]);
                    mini=min(mini, jump);
                }
                dp[i]=mini;
            }
            // int first=dp[i-1]+abs(height[i]-height[i-1]);
            // int second=INT_MAX;
            // if(i>1)
            // second=dp[i-2]+abs(height[i]-height[i-2]);
            
            // dp[i]=min(first, second);
        }
        return dp[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimizeCost(arr, N, K) << "\n";
    }
    return 0;
}
// } Driver Code Ends