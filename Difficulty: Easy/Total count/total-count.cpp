//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& a) {
        // code here
        int n=a.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]<=k){
                cnt+=1;
            }
            else if(a[i]%k){
                while(a[i]>0){
                    cnt++;
                    a[i]-=k;
                }
            }
            else if(a[i]%k==0){
                cnt+=a[i]/k;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends