# Flattening a Linked List



/* Node structure  used in the program

struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
    
Node* mergeTwoLists(Node* a,Node* b){
    Node *temp = new Node(0);
    Node *res = temp;
    while(a!=NULL && b!=NULL){
        if(a->data < b->data){
            temp->bottom = a;
            temp = temp->bottom;
            a = a->bottom;
        }
        else {
            temp->bottom = b;
            temp = temp->bottom;
            b = b->bottom;
        }
    }
    if(a) temp->bottom = a;
    else temp->bottom = b;
    return res->bottom;
}    

Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next) return root;
   root->next = flatten(root->next);
   root = mergeTwoLists(root,root->next);
   return root;
}

# Find the element that appears once

//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int xorr=0;
	    for(int i=0; i<N; i++){
	        xorr = xorr ^A[i];
	    }
	    return xorr;
	}
};

# Kth smallest element

//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        
        sort(arr,arr+r+1);
        return arr[k-1];
    }
};