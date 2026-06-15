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
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL; // 2 pointer bnao next ki value store kro prev ki trf arrow kro
        ListNode*curr=head;

        while(curr!=NULL){

            ListNode*next = curr->next; // is pointer m curr k next ki value store kro

            // ab curr node k next ko prev ki trf point kro // reverse
            curr->next=prev;

            //now udpate prev and next
            prev=curr; //ulti loop h piche vala curr hoga ab
            curr=next; // curr ko agli node pr aage lao arrow ulte krne ko

        }
        return prev;


    }
};