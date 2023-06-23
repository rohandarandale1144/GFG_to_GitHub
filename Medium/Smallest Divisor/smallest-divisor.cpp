//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
int solution(vector<int>&arr, int mid)
{
    int sum=0;
    for(int i=0;i<arr.size();i++)
    {
        sum+=ceil((double) (arr[i]) / (double) (mid));
    }
    return sum;
}

class Solution {
  public:
    int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int low=1, high=*max_element(nums.begin(), nums.end());
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(solution(nums, mid)<=K)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
    }
};


//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        int n, k;
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];

        Solution obj;
        cout << obj.smallestDivisor(vec, k) << endl;
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends