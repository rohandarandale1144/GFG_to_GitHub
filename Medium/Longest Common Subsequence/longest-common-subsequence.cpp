//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    private:
    int find(string &s1, string &s2, int i, int j, vector<vector<int>>&dp)
    {
        if(i==s1.size() || j==s2.size())
        return 0;
        
        if(dp[i][j] != -1)
        return dp[i][j];
        
        int res=0;
        
        if(s1[i] ==s2[j])
        {
            res=1+find(s1, s2, i+1, j+1, dp);
        }
        
        else
        {
            res=0+max(find(s1, s2, i+1, j, dp), find(s1, s2, i, j+1, dp));
        }
        
        return dp[i][j]=res;
        
        // int n=s.size();
        // if(idx >= n)
        // {
        //     ans.push_back(res);
        //     //return;
        // }
        // if(dp[idx] != "")
        // return dp[idx];
        // //Exclude
        // find(idx+1, s, ans, res, dp);
        
        // res.push_back(s[idx]);
        // dp[idx]=res;
        
        // find(idx+1, s, ans, res, dp);
        
    }
    
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        // your code here
        vector<vector<int>>dp(n+1, vector<int>(m+1, -1));
        
        return find(s1, s2, 0, 0, dp);
        
        
        // vector<string> ans;
        // vector<string> res;
        // string ans1="";
        // string res1="";
        
        // find(0, s1, ans, ans1, dp);
        // find(0, s2, res, res1, dp);
        
        // int maxi=INT_MIN;
        
        // set<string>st;
        // for(int i=0;i<ans.size();i++)
        // {
        //     st.insert(ans[i]);
        // }
        // for(int i=0;i<res.size();i++)
        // {
        //     if(st.find(res[i]) != st.end())
        //     {
        //         int n=res[i].size();
        //         maxi=max(maxi, n);
                
        //     }
        // }
        // return maxi;
        // int i=0, j=0;
        
        // while(i<ans.size() && j<res.size())
        // {
        //     if(ans[i] == res[j])
        //     {
        //         int n=ans[i].size();
        //         maxi=max(maxi, n);
        //         i++;
        //         j++;
        //     }
        //     else if(ans[i] < res[j])
        //     i++;
            
        //     else
        //     j++;
        // }
        //return maxi;
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends