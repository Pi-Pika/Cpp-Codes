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
  bool hasCycle(ListNode *head) {

    ListNode *fast = head;
    ListNode *slow = head;

    // iterate till fast and fast->next is valid
    while (fast != nullptr && fast->next != nullptr && slow != nullptr) {
      slow = slow->next;
      fast = fast->next->next;

      if (slow == fast) return true;  
    }
    return false;
  }
};

int main() {
	ListNode *node1 = new ListNode(3);
	ListNode *node2 = new ListNode(2);
	ListNode *node3 = new ListNode(0);
	ListNode *node4 = new ListNode(-4);
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node1;
	// printList(node1);
	Solution sol;
	cout<<boolalpha<<sol.hasCycle(node2)<<endl;
	return 0;
}