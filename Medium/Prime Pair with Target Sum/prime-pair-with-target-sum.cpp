//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    vector<int> getPrimes(int n) {
        // code here
        vector<bool> prime(n + 1, true);

        prime[0] = prime[1] = false;

        for (int p = 2; p * p <= n; p++) {
        
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

        vector<int>v;
        for (int p = 2; p <= n; p++) {
            if (prime[p]) {
                v.push_back(p);
            }
        }
        sort(v.begin(), v.end());
        int size=v.size();
        int low=0, high=size-1;
        while(low<=high){
            int sum=v[low] + v[high];
            if(sum==n){
                return {v[low], v[high]};
            }
            else if(sum<n){
                low++;
            }
            else{
                high--;
            }
        }
        return {-1,-1};
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        vector<int> res = obj.getPrimes(n);

        Array::print(res);
    }
}

// } Driver Code Ends