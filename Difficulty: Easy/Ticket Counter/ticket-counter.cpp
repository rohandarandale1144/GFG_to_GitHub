//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int distributeTicket(int N, int K) {
        // code here
        deque<int>dq;
        for(int i=1;i<=N;i++){
            dq.push_back(i);
        }
        while(dq.size()>1){
            int x=K;
            while(x-- && dq.size()>1){
                dq.pop_front();
            }
            x=K;
            while(x-- && dq.size()>1){
                dq.pop_back();
            }
        }
        return dq.front();
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int K;
        scanf("%d",&K);
        
        Solution obj;
        int res = obj.distributeTicket(N, K);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends