class Solution {
public:
    ListNode* merge(ListNode *head1, ListNode *head2) {
        ListNode *head = new ListNode(0);
        ListNode *tail = head;
        
        while (head1 && head2) {
            if (head1->val <= head2->val) {
                tail->next = head1;
                head1 = head1->next;
            } else {
                tail->next = head2;
                head2 = head2->next;
            }
            tail = tail->next;
        }
        
        if (head1) tail->next = head1;
        else tail->next = head2;

        return head->next;
    }

    void mergeSort(vector<ListNode*>& lists, int start, int end) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;
        mergeSort(lists, start, mid);
        mergeSort(lists, mid + 1, end);
        
        if (!lists[start]) lists[start] = lists[mid + 1];
        else lists[start] = merge(lists[start], lists[mid + 1]);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) return nullptr;

        mergeSort(lists, 0, lists.size() - 1);
        return lists[0];
    }
};
