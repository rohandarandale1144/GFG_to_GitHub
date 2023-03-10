//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        queue<int>q1;

        queue<int>q2;

        for(int i=0;i<n;i++){

            if(arr[i]>0){

                q1.push(arr[i]);

            }

            else{

                q2.push(arr[i]);

            }

        }

        int i=0;

        while(!q1.empty()){

            arr[i++]=q1.front();

            q1.pop();

        }

        while(!q2.empty()){

            arr[i++]=q2.front();

            q2.pop();

        }
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
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
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends