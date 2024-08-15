void decode_huff(node * root, string s) {
    // left = 0, right = 1
    //
    int move = 0;
    node* curr = root; 
    
    // iterate through the whole sequeunce
    while (s.size() > 0) 
    {
        // get the current move
        move = s.at(0) - '0';
        
        // in the instance we reach the left or rightmost node
        // print the details and reset the curr pointer
        if (curr->left == nullptr && move == 0 
        || curr->right == nullptr && move == 1)
        {
            cout << curr->data;
            curr = root;   
        }
        
        // move left or right depending on the move
        if (move == 0)
        {
            curr = curr->left;
        }
        else if (move == 1)
        {
            curr = curr->right;
        } 
        
        // erase the current move from the string
        s.erase(0, 1);
        
        // check to ensure the last move is printed out if final move 
        // was left and there was no left node to traverse OR 
        // was right and there was no right node to traverse
        if (s.size() == 0 && 
        ((curr->left == nullptr && move == 0) 
        || (curr->right == nullptr && move == 1)))
        {
            cout << curr->data;
        }
    }
}