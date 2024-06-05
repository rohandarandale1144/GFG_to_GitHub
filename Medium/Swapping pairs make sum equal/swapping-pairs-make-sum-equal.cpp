//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+m);
        int sum1=0, sum2=0;
        
        for(int i=0;i<n;i++){
            sum1+=a[i];
        }
        for(int j=0;j<m;j++){
            sum2+=b[j];
        }
        
        if(sum1==sum2)
        return 1;
        
        int diff=abs(sum1-sum2);
        
        if (diff==0)
        return 1;
        
        int i=0, j=0;
        int cnt=0;
        
        while(i<n && j<m){
            int sumA=sum1-a[i] + b[j];
            int sumB=sum2-b[j]+a[i];
            if(sumA==sumB){
               return 1;
            }
            if(sumA > sumB)
            i++;
            else
            j++;
        }
       return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends