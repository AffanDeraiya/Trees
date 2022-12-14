bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    if((root1==NULL && root2!= NULL) || (root1 != NULL && root2 == NULL)){
        return false;
    }
    if((root1->data != root2->data)|| (root1->children.size()!= root2->children.size())) {
        return false;
    }
    
    for (int i=0;i< root1->children.size();++i){
        TreeNode<int> *child1 = root1->children[i];
        TreeNode<int> *child2 = root2->children[i];
        
        if(!areIdentical(child1,child2)){
            return false;
        }
    }
    return true;
    
}
