int bst(struct node* node, int l, int r)
{
	if(node==NULL)
		return 0;
	else if(node->data<=min || node->data>=max)
		return 0;
	return (bst(node->left, min, node->data) && bst(node->right, mode->data, max));
}