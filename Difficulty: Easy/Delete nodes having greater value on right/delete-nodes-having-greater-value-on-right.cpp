//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void print(Node* root) {
    Node* temp = root;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *compute(Node *head) {
        // your code goes here
        vector<int>v;
        Node*curr=head;
        while(curr){
            v.push_back(curr->data);
            curr=curr->next;
        }
        int n=v.size();
        int top=v[n-1];
        vector<int>ans;
        ans.push_back(top);
        for(int i=n-2;i>=0;i--){
            if(v[i]>=top){
                top=v[i];
                ans.push_back(top);
            }
        }
        reverse(ans.begin(), ans.end());
        Node*temp=new Node(-1);
        Node*dummy=temp;
        for(int i=0;i<ans.size();i++){
            dummy->next=new Node(ans[i]);
            dummy=dummy->next;
        }
        return temp->next;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        if (arr.empty()) {
            cout << -1 << endl;
            continue;
        }
        Solution ob;
        int data = arr[0];
        Node* head = new Node(data);
        Node* tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            data = arr[i];
            tail->next = new Node(data);
            tail = tail->next;
        }
        Node* result = ob.compute(head);
        print(result);
        cout << endl;
    }
}

// } Driver Code Ends