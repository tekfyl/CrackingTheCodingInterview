ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
        ListNode *l1 = A, *l2 = B;
            if(!l1)
                return l2;
            if(!l2)
                return l1;

            int carry = (l1->val + l2->val) / 10;
            ListNode *l3 = new ListNode((l1->val + l2->val) % 10);
            ListNode *tail = l3;
            l1 = l1->next;
            l2 = l2->next;

            while(l1 || l2 || carry){
                int sum = ((l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry);
                ListNode *t  = new ListNode(sum % 10);
              carry = sum / 10;                                          
                if(l1)
                    l1 = l1->next;
                if(l2)
                    l2 = l2->next;
                tail->next = t;
                tail = t;
            }
    return l3;    
}

