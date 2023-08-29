//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
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
class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        if(head==NULL || head->next==NULL)
        return head;
        
        Node*dummy=new Node(-1);
        dummy->next=head;
        Node*curr=head;
        Node*prev=dummy;
        int maxi=INT_MIN;
        
        while(curr!=NULL && curr->next != NULL)
        {
            bool ans = false;
            Node* scan = curr->next;

            while (scan) 
            {
                if (scan->data > curr->data) 
                {
                    ans = true;
                    break;
                }
                scan = scan->next;
            }
            if (ans) 
            {
                prev->next = curr->next;
                delete curr;
            } 
            else 
            {
                prev = curr;
            }
    
            curr = prev->next;
    }
    return dummy->next;
    }
};
   


//{ Driver Code Starts.

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends