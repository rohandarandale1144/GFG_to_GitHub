//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int m=str1.size();
	    int n=str2.size();
	    vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
	    for(int i=1;i<=m;i++){
	        for(int j=1;j<=n;j++){
	            if(str1[i-1]==str2[j-1]){
	                dp[i][j]=1+dp[i-1][j-1];
	            }else{
	                dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
	            }
	        }
	    }
	    return m-dp[m][n]+n-dp[m][n];
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends