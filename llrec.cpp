#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot) { 
  if (!head) {
    smaller = nullptr; 
    larger = nullptr; 
    return; 
    }

  Node* temp = head; 
  head = head->next; 
  temp->next = nullptr; 

  llpivot(head, smaller, larger, pivot); 

  if (temp->val > pivot) { 
    temp->next = larger; 
    larger = temp;  
  }
  else if (temp->val <= pivot) { 
    temp->next = smaller; 
    smaller = temp; 
  }
  head = nullptr; 
}



