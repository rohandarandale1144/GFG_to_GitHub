//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int cnt=0;
    
    void merge(int a[], int l, int mid, int h){
        vector<int>v(h-l+1);
        int i=l, j=mid+1, k=0;
        while(i<=mid && j<=h){
            if(a[i]<=a[j]){
                v[k++]=a[i++];
            }
            else{
                cnt+=mid-i+1;
                v[k++]=a[j++];
            }
        }
        while(i<=mid){
            v[k++]=a[i++];
        }
        while(j<=h){
            v[k++]=a[j++];
        }
        for(int i=l, j=0;j<h-l+1;i++){
            a[i]=v[j++];
        }
    }
    
    void mergeSort(int a[], int l, int h){
        if(l>=h)
        return;
        
        int mid=(l+h)/2;
        mergeSort(a, l, mid);
        mergeSort(a, mid+1, h);
        merge(a, l, mid, h);
    }
    int countPairs(int arr[] , int n ) 
    {
        // Your code goes here   
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=i*arr[i];
        }
        
        mergeSort(a, 0, n-1);
        return cnt;
    }
};

//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int a[n];
    	for(int i=0;i<n;i++)
    	cin>>a[i];
    	Solution ob;
    	cout<<ob.countPairs(a, n)<<endl;
    }
}
// } Driver Code Ends