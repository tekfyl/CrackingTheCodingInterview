ListNode* Solution::detectCycle(ListNode* A) {
    ListNode *f, *s;
    s = f = A;
    int index = 0; bool cycle=0;
    while(f != NULL && f->next != NULL){
        f = f->next->next;
        s = s->next;
        if(s == f){ cycle = 1; break; }
    }
    if(cycle == 0) return NULL;
    else{
        f = A;
        while(f!=s){
            f = f->next;
            s = s->next;
        }
        return f;
    }
}

