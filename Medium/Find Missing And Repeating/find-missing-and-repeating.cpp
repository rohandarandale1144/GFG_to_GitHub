//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *a, int n) {
        // code here
        int *final=new int[2];
        int hash[n+1]={0};
        
        for(int i=0;i<n;i++)
        {
            hash[a[i]]++;
        }
        
        int repeating=-1, missing=-1;
        
        for(int i=1;i<=n;i++)
        {
            if(hash[i]==2)
            
            final[0]=i;
    
            if(hash[i]==0)
            
            final[1]=i;
    
            if(repeating!= -1 && missing!= -1)
            break;
        }
        return final;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends