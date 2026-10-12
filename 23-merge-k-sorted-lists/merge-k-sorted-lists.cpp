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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>ans;
       
        map<int,int>mp;

        for(int i=0;i<lists.size();i++){
            ListNode* head=lists[i];
            while(head!=NULL){
                mp[head->val]++;
                head=head->next;
            }
        }

        for(auto it:mp){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }

        if (ans.empty()) return NULL;

        ListNode* newHead = new ListNode(ans[0]);
        ListNode* temp= newHead;

        for(int i=1;i<ans.size();i++){
            temp->next=new ListNode(ans[i]);
            temp=temp->next;
        }
        return newHead;
    }
};