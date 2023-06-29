//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int a[], int b[], int n) {
            // code here 
             int i=0,j=0,k=0;
             
            int ans[2*n]={0};
            
            while(i< n && j< n)
            {
                if(a[i]<b[j])
                {
                    ans[k]=a[i];
                    k++;
                    i++;
                }
                else  
                {
                    ans[k]=b[j];
                    k++;
                    j++;
                }
            }
            
            while(i<n)
            {
                ans[k++]=a[i++];
            }
            
            while(j<n)
            {
                ans[k++]=b[j++];
            }
            
            return ans[n-1] + ans[n];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends