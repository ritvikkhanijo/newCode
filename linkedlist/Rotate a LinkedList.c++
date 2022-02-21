// To rotate a linked list by k, we can first make the linked list circular and then moving 
// k-1 steps forward from head node, making (k-1)th node’s next to null and make kth node as 
// head.

void rotate(Node** head_ref, int k)
{
    if (k == 0)
        return;
 
    // Let us understand the below
    // code for example k = 4 and
    // list = 10->20->30->40->50->60.
    Node* current = *head_ref;
 
    // Traverse till the end.
    while (current->next != NULL)
        current = current->next;
 
    current->next = *head_ref;
    current = *head_ref;
 
    // traverse the linked list to k-1 position which
    // will be last element for rotated array.
    for (int i = 0; i < k - 1; i++)
        current = current->next;
 
    // update the head_ref and last element pointer to NULL
    *head_ref = current->next;
    current->next = NULL;
}