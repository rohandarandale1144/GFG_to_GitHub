//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int findMaxProduct(vector<int>& arr) {
        // Write your code here
        long long int prod=1;
        int n=arr.size();
        int zero=0, nonZero=0, maxi=INT_MIN;
        
        if(n<=1){
            return arr[0];
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                prod=(prod*arr[i])%1000000007;
                nonZero=1;
            }
            else{
                zero=1;
            }
            if(arr[i]<0 && arr[i]>maxi){
                maxi=arr[i];
            }
        }
        if(nonZero!=1){
            return 0;
        }
        if(arr.size()==2 && zero==1 && prod<0){
            return 0;
        }
        if(prod<0){
            prod/=maxi;
        }
        return prod;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        long long int ans = ob.findMaxProduct(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends