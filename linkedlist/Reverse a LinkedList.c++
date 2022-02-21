ListNode* reverseList(ListNode* head) {
        if(head == NULL) return head;
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            
        }
        
        head = prev;
        return head;
        
    }