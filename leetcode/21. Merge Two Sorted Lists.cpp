#include <bits/stdc++.h>
#define endl "\n"
#define in long long
#define dub double
#define dubb long double
#define pb push_back
#define pi 3.14159265358979323846
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
  public:
	ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* dummy = new ListNode(-1);
        ListNode* headnode = dummy;

        while (list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                dummy->next = list1;
                list1 = list1->next;
            } else {
                dummy->next = list2;
                list2 = list2->next;
            }
            dummy = dummy->next;
        }
        if (list1 == NULL)
        {
            dummy->next = list2;
        } else if (list2 == NULL){
            dummy->next = list1;
        }
        return headnode->next;
    }
};

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
	ListNode *list1 = new ListNode(1);
	list1->next = new ListNode(2);
	list1->next->next = new ListNode(4);
	printList(list1);
	ListNode *list2 = new ListNode(1);
	list2->next = new ListNode(3);
	list2->next->next = new ListNode(4);
	list2->next->next->next = new ListNode(5);
	list2->next->next->next->next = new ListNode(6);
	printList(list2);
	Solution sol;
	ListNode *result = sol.mergeTwoLists(list1, list2);
	printList(result);
	return 0;
}