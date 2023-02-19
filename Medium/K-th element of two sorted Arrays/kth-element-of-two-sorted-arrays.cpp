//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int size=n+m;
        int arr3[size];
        int a=0, b=0, c=0;
        while(a<n && b<m)
        {
            if(arr1[a]<arr2[b])
            {
                arr3[c++]=arr1[a++];
            }
            else
            {
                arr3[c++]=arr2[b++];
            }
        }
        while(a<n)
        {
            arr3[c++]=arr1[a++];
        }
        while(b<m)
        {
            arr3[c++]=arr2[b++];
        }
        sort(arr3, arr3+size);
        return arr3[k-1];
    }
};

//{ Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}
// } Driver Code Ends