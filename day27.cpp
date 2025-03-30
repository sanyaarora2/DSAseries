Day 27 
Ques 1

/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
        stack<int>stk;
        DLLNode* temp=head;
        while(temp!=NULL){
            
            stk.push(temp->data);
            temp=temp->next;
            
        }
        temp=head;
        while(temp!=NULL){
            temp->data=stk.top();
            stk.pop();
            temp=temp->next;
        }
        return head;
        
    }
};
TC= O(n), SC=O(1)
Ques 2 ques 2 
/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        // Your code here
        
    if (head == NULL) return NULL;

    Node* curr = head;
    int count = 1;

    // Traverse to the x-th node
    while (curr != NULL && count < x) {
        curr = curr->next;
        count++;
    }

    // If position is invalid
    if (curr == NULL) return head;

    // If it's the head node
    if (curr->prev == NULL) {
        head = curr->next;
        if (head != NULL) head->prev = NULL;
    }
    // If it's the tail node
    else if (curr->next == NULL) {
        curr->prev->next = NULL;
    }
    // Middle node
    else {
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
    }

    delete curr;
    return head;

    }
};

TC= O(n), SC=O(1)
