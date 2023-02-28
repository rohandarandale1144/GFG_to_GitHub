//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}
// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    queue<int>qu;
    stack<int>st;
    int ans;
    while(!q.empty())
    {
        ans=q.front();
        q.pop();
        st.push(ans);
    }
    while(!st.empty())
    {
        int ans2;
        ans2=st.top();
        st.pop();
        qu.push(ans2);
    }
    return qu;
}