/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
int call(ListNode* h){
    int res=0;
    while(h){
res++;
h=h->next;
    }
    return res;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length=call(head);
        if(length==n){
            ListNode* newhd=head->next;
            delete head;
            return newhd;
        }
        ListNode* curr=head;
        for(int i=0; i<length-n-1; i++){
          curr=curr->next;
        }


        curr->next=curr->next->next;
        return head;


    }
};
