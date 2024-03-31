//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// Utility function to create a new node
Node* newNode(int data) {
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return (temp);
}

Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
// User function Template for C++

/*// A Tree node
struct Node
{
    int data;
    struct Node *left, *right;
};*/
void merge(vector<int>& arr, int low, int mid, int high, int& count) {
        int i = low, j = mid + 1;
        while (i <= mid && j <= high) {
            if (arr[i] > arr[j]) {
                count += (mid - i + 1);
                j++;
            } else {
                i++;
            }
        }
        sort(arr.begin() + low, arr.begin() + high + 1);
}
    
 void mergeSortAndCount(vector<int>& arr, int low, int high, int& count) {
        if (low < high) {
            int mid = (low + high) / 2;
            mergeSortAndCount(arr, low, mid, count);
            mergeSortAndCount(arr, mid + 1, high, count);
            merge(arr, low, mid, high, count);
        }
}
    
void inorder(vector<int>&v, Node*root){
    if(root==NULL)
    return;
    inorder(v, root->left);
    v.push_back(root->data);
    inorder(v, root->right);
}

class Solution {
  public:

    /*You are required to complete below function */
    int pairsViolatingBST(int n, Node *root) {
        // your code goes here
        vector<int>v;
        inorder(v, root);
        
        int count = 0;
        mergeSortAndCount(v, 0, v.size() - 1, count);
        return count;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    getchar();

    while (t--) {

        int n;
        cin >> n;
        getchar();

        string inp;
        getline(cin, inp);

        struct Node* root = buildTree(inp);

        Solution ob;
        int ans = ob.pairsViolatingBST(n, root);
        cout << ans << endl;
    }

    return 0;
}
// } Driver Code Ends