Day 26 
Ques 1
class Solution {
public:
    // Function to insert a new node at given position in doubly linked list.
    Node* addNode(Node* head, int pos, int data) {
        int count = 0;
        Node* temp = head;
        while (temp != nullptr){
            if (count == pos){
                break;
            }
            temp = temp->next;
            count++;
        }
        Node* newNode = new Node(data);
        if (temp->next == nullptr){
            newNode->prev = temp;
            temp->next = newNode;
            return head;
        }
        newNode->prev = temp;
        newNode->next = temp->next;

        temp->next->prev = newNode;
        temp->next = newNode;

        return head;
    }
};

// TC O(n) SC O(1)

Ques 2
day 26  ques 2 
/* Link list node */
/*
struct Node
{
    int data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
}; */

class Solution {
  public:
    // Function to count nodes of a linked list.
    bool searchKey(int n, Node* head, int key) {
        // Code here
        Node* temp=head;
        if(head->data==key)
        return true;
        if(temp->next==NULL && temp->data==key)
        return true;
        while(temp!=NULL){
          
            if(temp->data==key){
                return true;
            }
              temp=temp->next;
        }
        return false;
    }
};
TC= O(n)
SC=O(1)
