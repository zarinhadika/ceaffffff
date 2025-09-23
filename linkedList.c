
struct ListNode* reverseList(struct ListNode* head) {
   struct ListNode *current=head;
   struct ListNode *previous=NULL;
   struct ListNode *future=NULL;
   while(current!=NULL)
   {
    future=current->next;
    current->next=previous;
    previous=current;
    current=future;
   }
   return previous;
}
