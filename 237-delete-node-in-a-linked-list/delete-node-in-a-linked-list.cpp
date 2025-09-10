class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
       //ListNode* temp = node->next;
        node->next = node->next->next;
        //delete temp;
    }
};

/*void printList(ListNode* head) {
    while (head != NULL) {
        cout <<head -> val << " ";
        head =head -> next;
    }
    cout << endl;
}*/