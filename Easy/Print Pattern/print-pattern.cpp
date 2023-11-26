//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> pattern(int N){
        // code here
        vector<int> v;
        while(N>0)
        {
            v.push_back(N);
            N-=5;
        }
        
        vector<int> v2=v;
        
        reverse(v2.begin(),v2.end());
        
        v.push_back(N);
        
        for(auto it: v2)
        v.push_back(it);
        
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends