//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

bool palindrome(int i, int j, string &s)
{
    while(i<j)
    {
        if(s[i]!=s[j])
        return false;
        
        i++;
        j--;
    }
    return true;
}
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int maxi=INT_MIN;
        string ans="";
        for(int i=0;i<S.size();i++)
        {
            for(int j=S.size()-1;j>=i;j--)
            {
                if(palindrome(i, j, S))
                {
                    if(maxi < (j-i+1))
                    {
                        maxi=j-i+1;
                        ans=S.substr(i, j-i+1);
                    }
                    break;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends