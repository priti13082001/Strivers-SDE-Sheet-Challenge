#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    // Write your code here.
    Node<int>* dummy=new Node<int>(-1);
    Node<int>* current=dummy;
    while(first && second)
    {
         if(first->data<=second->data)
         {
             current->next=first;
             first=first->next;
         }
         else
         {
             current->next=second;
             second=second->next;
         }
         current=current->next;
    }
    if(first)
    {
        current->next=first;
    }
    if(second)
    {
        current->next=second;
    }
  
    return dummy->next;
}
