void preOrder(Node *root) {
    
    // base case
    if (root == nullptr)
        return; 
        
    // print the current node details
    std::cout << root->data << " "; 
    
    // iterate the left then right nodes
    preOrder(root->left);
    
    preOrder(root->right);
    
}