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
    bool isPalindrome(ListNode* head) {
        vector<int>ans; // stores ans
            ListNode* temp=head;
            while(temp!=NULL){
            ans.push_back(temp->val);
            temp=temp->next;
        }

        // palindrome check
        int n=ans.size();
        int l=0;
        int r=n-1;

        while(l < r){
        if(ans[l] != ans[r]){
            return false;
            }

            l++;
            r--;
        }
        return true;
    }
};