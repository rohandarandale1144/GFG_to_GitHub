//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int q=n,fact=1,result=0;
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
        if(result==n)
        return 1;
        else
        return 0;
		}
	
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends