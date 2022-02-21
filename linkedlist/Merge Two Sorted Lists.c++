ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode start(INT_MIN);
        ListNode* tail = &start;
        
        while(l1 && l2){
            if(l1->val>l2->val){
                tail->next = l2;
                l2=l2->next;
            }else{
                tail->next = l1;
                l1=l1->next;
            }
            tail=tail->next;
        }
        
        if(l1 == NULL) tail->next = l2;
        else tail->next = l1;
        
        return start.next;
    }