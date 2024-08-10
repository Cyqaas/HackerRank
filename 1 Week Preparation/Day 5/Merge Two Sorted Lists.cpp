SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    // declare a new merged list and current node
    SinglyLinkedListNode* mergedList = new SinglyLinkedListNode(0); 
    SinglyLinkedListNode* curr = mergedList; 
    
    // iterate until one or both of the lists are empty 
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data <= head2->data)
        {
            curr->next = new SinglyLinkedListNode(head1->data);
            head1 = head1->next;
        }
        else if (head1->data > head2->data)
        {
            curr->next = new SinglyLinkedListNode(head2->data);
            head2 = head2->next;
        }
        curr = curr->next;
    } 
    
    // if any, copy the rest of whatever list remains
    if (head1 != NULL)
    {
        curr->next = head1; 
    }
    else if (head2 != NULL)
    {
        curr->next = head2; 
    }
    
    return mergedList->next; 
}