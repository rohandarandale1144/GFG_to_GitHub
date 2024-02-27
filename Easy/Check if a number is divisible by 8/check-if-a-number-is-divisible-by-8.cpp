//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        string ans="";

        int cnt=0;

        for(int i=s.length()-1;i>=0 && cnt<3;i--){

            ans+=s[i];
            cnt++;

        }
        reverse(ans.begin(),ans.end());

        return stoi(ans)%8==0?1:-1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends