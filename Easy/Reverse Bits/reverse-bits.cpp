//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
       long long result = 0;
    int bitCount = 31; 
    
    while (x > 0) {
        result |= (x & 1) << bitCount;
        x >>= 1;
        bitCount--;
    }
    
    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends