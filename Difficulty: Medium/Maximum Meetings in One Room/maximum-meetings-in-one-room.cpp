//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<int>v;
        int n=S.size();
        vector<pair<int, int>>p(n);
        for(int i=0;i<n;i++){
            p[i]={F[i], i};
        }
        sort(p.begin(), p.end());
        int timel=p[0].first;
        v.push_back(p[0].second+1);
        for(int i=1;i<n;i++){
            if(S[p[i].second] > timel){
                v.push_back(p[i].second+1);
                timel=p[i].first;
            }
        }
        sort(v.begin(), v.end());
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> S(n),F(n);
        for(int i=0;i<n;i++){
            cin>>S[i];
        }
        for(int i=0;i<n;i++){
            cin>>F[i];
        }
        Solution ob;
        vector<int> ans=ob.maxMeetings(n,S,F);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends