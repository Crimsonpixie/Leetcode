//Iterative Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *prev=NULL,*next=NULL,*curr=head;
       while(curr!=NULL){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;  
       }
       head=prev; 
       return head;  
    }
};

//Recursive Solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if(head==NULL || head->next==NULL){
         return head;  
       } 
       ListNode *rest=reverseList(head->next);
       head->next->next=head;
       head->next=NULL;
       return rest; 
    }
};