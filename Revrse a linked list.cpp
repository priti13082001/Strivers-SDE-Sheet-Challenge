LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    // Write your code here
    
    LinkedListNode<int> *pre=NULL;
   
    while (head) {
      LinkedListNode<int> *next2 = head->next;
      head->next = pre;
      pre = head;
      head = next2;
    }
    return pre;
}