//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string isKrishnamurthy(int N) {
        // code here
        int q=N, fact=1,result=0;
        while(q!=0)
        {
            int rem=q%10;
            for(int i=1;i<=rem;i++)
            {
                fact=fact*i;
            }
            result=result+fact;
            fact=1;
            q=q/10;
        }
        if(result==N)
        return "YES";
        else
        return "NO";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.isKrishnamurthy(N) << endl;
    }
    return 0;
}
// } Driver Code Ends