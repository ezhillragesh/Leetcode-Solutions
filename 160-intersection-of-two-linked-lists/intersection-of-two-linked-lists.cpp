/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int getLength(ListNode *head){
        int count=0;
        while(head->next!=NULL){
             count++;
            head=head->next;
           
        }
        return count+1;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currA=headA;
        ListNode *currB=headB;
        int lenA=getLength(currA);
        int lenB=getLength(currB);
        cout<<lenA<<" "<<lenB<<" ";
        if(lenA >lenB){
            while(lenA>lenB){
                currA=currA->next;
                lenA--;
            }
        }
        else if(lenB >lenA){
            while(lenB >lenA){
                currB=currB->next;
                lenB--;
            }
        }
        while(currA!=NULL && currB!=NULL){
            if(currA == currB){
                return currA;
            }
            currA=currA->next;
            currB=currB->next;
        }
        return NULL;
    }
};