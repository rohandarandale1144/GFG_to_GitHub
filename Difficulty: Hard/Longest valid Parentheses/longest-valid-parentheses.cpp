//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string str) {
        // code here
        int n=str.size();
        stack<int>st;
        st.push(-1);
        int maxi=0;
        for(int i=0;i<n;i++){
            char ch=str[i];
            if(ch=='('){
                st.push(i);
            }else{
                st.pop();
                if(st.empty()){
                        st.push(i);
                    }
                maxi=max(maxi, i-st.top());
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
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends