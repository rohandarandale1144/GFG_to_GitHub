//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int sameChar(string A, string B)
    {
        // code here 
        string s;
        string t;
        for(char &c:A){
            c=tolower(c);
            // s+=c;
        }
        for(char &c:B){
            c=tolower(c);
            // t+=c;
        }
        int cnt=0;
        int n=A.size();
        
        int i=0, j=0;
        for(int i=0;i<n;i++){
            if(A[i]==B[i]){
                cnt++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.sameChar(A,B)<<endl;
    }
    return 0;
}
// } Driver Code Ends