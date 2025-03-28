Day 25 
Ques 1
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == nullptr || node->next == nullptr) {
            return; // Edge case: if node is null or the last node, we can't delete it this way
        }
        ListNode* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp; // Proper way to deallocate memory in C++
    }
};
TC=O(1)
SC=O(1)

Ques 2
/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        Node* newnode=new Node(x);
        Node* temp=head;
        if(head==NULL){
           return newnode;
        }
        
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
        return head;
    }
};
TC= O(n)
SC=O(1)
