//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
#include<bits/stdc++.h>
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long maxii=1;
	    long long mini=1;
	    long long ans=INT_MIN;
	    
	    if(arr.size() <=1)
	    return arr[0];
	    
	    for(int i=0;i<n;i++)
	    {
	        if(maxii==0)
	        maxii=1;
	        
	        if(mini==0)
	        mini=1;
	        
	        maxii*=arr[i];
	        mini*=arr[n-i-1];
	        
	        ans=max(ans, max(maxii, mini));
	    }
	    
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends