//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    int cnt1=0,  cnt2=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]!=str[i+1])
        {
            cnt1++;
        }
    }
    cnt2=(cnt1+1)/2;
    if(cnt1%2==0)
    return cnt2+1;
    else
    return cnt2;
    //return abs(cnt1-cnt2)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends