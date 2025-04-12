day 30   ques 1 class Solution {
public:
    ListNode* findmiddle(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* merge2sortedLL(ListNode* lefthead, ListNode* righthead){
        ListNode* temp1=lefthead;
        ListNode* temp2= righthead;
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(temp1!=NULL && temp2!=NULL){
            if(temp1->val<temp2->val){
                temp->next=temp1;
                temp1=temp1->next;
            }
            else{
                temp->next=temp2;
                temp2=temp2->next;
            }
            temp=temp->next;
        }
        if(temp1){
            temp->next=temp1;
        }
        if(temp2){
            temp->next=temp2;
        }
        ListNode* newhead=dummy->next;
        
        delete dummy;
        return newhead;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* middle=findmiddle(head);
        
        
        ListNode* righthead=middle->next;
        middle->next=NULL;
        ListNode* lefthead=sortList(head);
        righthead=sortList(righthead);
      return  merge2sortedLL(lefthead, righthead);

        
    }
};
 tc, sc=O(1)  class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int total=0;
        while(temp!=NULL){
            total++;
            temp=temp->next;
        }
        int kthfstart=total-n+1;
        if(kthfstart==1){
            ListNode* newhead=head;
            newhead=head->next;
            delete head;
            return newhead;

        }
        temp=head;
        
        for(int i=1; i<kthfstart-1; i++){
            temp=temp->next;
        }
        ListNode* nodetodel=temp->next;
        temp->next=temp->next->next;
        delete nodetodel;
        return head;

        
    }
};
tc,sc=O(1)
