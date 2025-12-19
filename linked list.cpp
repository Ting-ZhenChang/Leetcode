// input : 1 → 2 → 3 → 4 → 5 → nullptr
// output : 5 → 4 → 3 → 2 → 1 → nullptr


範例一:

非遞迴:
ListNode* reverseList(ListNode *head){    //（原始串列：1 → 2 → 3 → nullptr）
  ListNode *head_prev = nullptr, *head_next;
  while(head){                  // 初始狀態:head = 1，pead_prev = nullptr
    head_next = head -> next;   // head_next = 2
    head -> next = head_prev;   // 1 -> nullptr
    head_prev = head;           // head_prev = 1
    head = head_next;           // head = 2
  }
  return head_prev;
}


範例二:

遞迴:
ListNode* reverseList(ListNode* head, ListNode* head_prev = nullptr ){
  if(head = nullptr){ return head_prev }
  ListNode* head_next = head -> next;
  head -> next = head_prev;
  return reverseList( head_next , head ); 
}
