/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
       ListNode *root ;
       root       = new ListNode(0);
       ListNode *result = root;
       int carry = 0;
       while (l1 || l2 || carry == 1)
       {
       		int value = 0;
        	if (l1)
        	{
        		value += l1->val;
        		l1     = l1->next;
        	}
        	if (l2)
        	{
   ,     		value += l2->val;
        		l2	   = l2->next;
        	}
        	value     += carry;
        	root->next = new ListNode(value %10);
        	carry     = int(value/10);
        	root      = root->next;
       }          
       	    return result ->next;

        
    }
};