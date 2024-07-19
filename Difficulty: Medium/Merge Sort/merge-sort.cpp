//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int a1=m-l+1;
         int b1=r-m;
         int a[a1], b[b1];
         for(int i=0;i<a1;i++){
             a[i]=arr[l+i];
         }
         for(int i=0;i<b1;i++){
             b[i]=arr[m+1+i];
         }
         int i=0, j=0, k=l;
         while(i<a1 && j<b1){
             if(a[i]<b[j]){
                 arr[k++]=a[i++];
             }
             else{
                 arr[k++]=b[j++];
             }
         }
         while(i<a1){
             arr[k++]=a[i++];
         }
         while(j<b1){
             arr[k++]=b[j++];
         }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return;
        }
        int mid=(l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends