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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* merged = new ListNode(-1);
        ListNode* temp = merged;
    // temp initially at -1
        while(list1 != NULL && list2 != NULL){
            if(list1->val <= list2->val){
                temp->next = new ListNode(list1->val); // new pointer create krega + val add krdega us new node m
                temp = temp->next; // temp ka pr move forward
                list1=list1->next;
            }
            else{
                temp->next=new ListNode(list2->val);
                temp=temp->next;
                list2=list2->next;
            }
        }

        // if either of loop finishes loop exit
        //for finishing another list it will be added as it is
        while(list1 != NULL){
        temp->next = new ListNode(list1->val);
        temp = temp->next;
        list1 = list1->next;
        }

        while(list2 != NULL){
        temp->next = new ListNode(list2->val);
        temp = temp->next;
        list2 = list2->next;
    }
        return merged -> next;
    }
};