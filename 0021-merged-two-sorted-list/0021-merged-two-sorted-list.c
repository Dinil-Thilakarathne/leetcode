#include <stdio.h>

// Definition for singly-linked list.
struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* result;
    // use recursion

    // base cases
    if(list1 == NULL)
    {
        return list2;
    }

    if (list2 == NULL)
    {
        return list1;
    }

    // return either list1 or list2 or recur
    if(list1->val <= list2->val)
    {
        result = list1;
        result->next = mergeTwoLists(list1->next, list2);
    }else
    {
        result = list2;
        result->next = mergeTwoLists(list1, list2->next);
    }

    return result;

}
