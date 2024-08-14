//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
    // private:
    // vector<string>solve(string &str, int m, vector<string>&v){
    //     for(int i=0;i<m;i++){
    //         string s="";
    //         for(int j=i;j<m;j++){
    //             s+=str[j];
    //             v.push_back(s);
    //         }
    //     }
    //     return v;
    // }
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int maxi=0;
        int m=str1.size();
        int n=str2.size();
        vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str1[i-1]==str2[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    maxi=max(maxi, dp[i][j]);
                }else{
                    dp[i][j]=0;
                }
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends