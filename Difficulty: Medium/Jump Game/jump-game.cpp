//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        if(N==1){
            return 1;
        }
        if(A[0]==0){
            return 0;
        }
        int maxReach=A[0];
        int endStart=A[0];
        int cnt=1;
        for(int i=1;i<N;i++){
            if(i==N-1){
                return 1;
            }
            maxReach=max(maxReach, i+A[i]);
            if(endStart==i){
                cnt++;
                endStart=maxReach;
            }
            if(endStart<=i){
                return 0;
            }
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends