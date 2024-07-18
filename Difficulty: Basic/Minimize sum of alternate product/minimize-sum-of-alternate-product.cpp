//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

long long altProduct(long long a[], long long n);

int main() 
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        long long a[n];
        for(int i =0;i<n;i++)
           cin >> a[i];
        
        cout << altProduct(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends




long long altProduct(long long arr[], long long n)
{
    // Your code goes here   
    vector<long long>a, b;
    sort(arr, arr+n);
    int m=n/2;
    for(int i=0;i<m;i++){
        a.push_back(arr[i]);
    }
    for(int i=m;i<n;i++){
        b.push_back(arr[i]);
    }
    reverse(b.begin(), b.end());
    int i=0, j=0;
    long long sum=0;
    int c=a.size(), d=b.size();
    while(i<c && j<d){
        long long multi=a[i]*b[j];
        sum+=multi;
        i++;
        j++;
    }
    return sum;
}