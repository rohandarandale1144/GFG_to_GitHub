//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int n, int x)
	{
	    // Your code goes here
	   // int i=0, j=n-1;
	   // int cnt=0;
	   // while(i<n && j>=0 && mat1[i][j]<=x){
	        
	   //     int sum=mat1[i][j] + mat2[i][j];
	   //     if(sum==x){
	   //         cnt++;
	   //         i++;
	   //         j--;
	   //     }
	   //     else if(sum<x){
	   //         i++;
	   //     }
	   //     else{
	   //         j--;
	   //     }
	   // }
	   // return cnt;
	   
	   int i=0,j=n*n-1,ans=0;
	     while(i<(n*n) && j>=0){
	         int e=mat1[i/n][i%n]+mat2[j/n][j%n];
	         if(e==x){ ans++;i++;j--;}
	         else if(e>x) j--;
	         else i++;
	     }
	     return ans;
	}
};

//{ Driver Code Starts.


int main() 
{

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<vector<int>> mat1(n, vector<int>(n, -1));
        vector<vector<int>> mat2(n, vector<int>(n, -1));

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat1[i][j];
        	}
        }

        for(int i = 0; i < n; i++)
        {
        	for(int j = 0; j < n; j++)
        	{
        		cin >> mat2[i][j];
        	}
        }

        Solution ob;

        cout << ob.countPairs(mat1, mat2, n, x) << "\n";

    }

    return 0;
}
// } Driver Code Ends