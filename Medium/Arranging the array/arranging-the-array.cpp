//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
            vector<int>v, ans;
            
            for(int i=0;i<n;i++)
            {
                if(arr[i] < 0)
                {
                    ans.push_back(arr[i]);
                }
                else
                {
                    v.push_back(arr[i]);
                }
            }
            
            for(int i=0;i<v.size();i++)
            {
                ans.push_back(v[i]);
            }
            
            for(int i=0;i<n;i++)
            {
                arr[i]=ans[i];
            }
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends