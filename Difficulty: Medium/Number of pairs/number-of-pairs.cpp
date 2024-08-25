//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
        long long cnt=0;
        int m=arr.size();
        int n=brr.size();
        
        vector<double>logA(m);
        vector<double>logB(n);
        
        for(int i=0;i<m;i++){
            logA[i]=(double)log(arr[i])/(double)arr[i];
        }
        for(int i=0;i<n;i++){
            logB[i]=(double)log(brr[i])/(double)brr[i];
        }
        sort(logA.begin(), logA.end(), greater<double>());
        sort(logB.begin(), logB.end(), greater<double>());
        
        int i=0, j=0;
        int x=logA.size();
        int y=logB.size();
        while(i<x && j<y){
            if(logA[i]>logB[j]){
                cnt+=(y-j);
                i++;
            }else{
                j++;
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends