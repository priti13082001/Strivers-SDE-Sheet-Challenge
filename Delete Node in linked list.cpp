void deleteNode(LinkedListNode<int> * node) {
    // Write your code here.
    LinkedListNode<int> * temp=node->next;
    node->data=temp->data;
   node->next=temp->next;

}