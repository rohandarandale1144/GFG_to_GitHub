//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int klengthpref(string a[], int n, int k, string str){    
        
        int size=str.size();
        if(size<k)
        return 0;
        
        string ans=str.substr(0, k);
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i].size() < k)
            continue;
            
            string res=a[i].substr(0, k);
            
            if(ans==res)
            cnt++;
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>arr[i];
            
        }
        int k;
        cin>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout << ob.klengthpref(arr, n, k, str) << endl;
    }
    return 0; 
} 

// } Driver Code Ends