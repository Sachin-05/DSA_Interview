struct Node{
     int data;
     Node* left;
     Node* right;

    // let's create a constructor of the value and mark it live in the zonal out of form   
    int data (int val){
	Node *left = nullptr;
    	Node *right = nullptr;
}};

// the above declaration is done through of the schema of the binary tress

// Now to calculate the leaves of the binary search tree

Node* leavesofbinarytree(Node* root, int val){
	int ans = 0;

	if(root == null){
		return;
	}

	ans += root->data;
	leavesofbinarytree(root->left);
	leavesofbinarytree(root->right);
	
	return ans;

}

int main(){
    int testcase;
	cin >> testcase;
while(testcase--){
	int n;
        cin >> n;
        // we are getting the input from the binary tree through vector
	for(int i=0; i<n; ++i){
		// so uptil now we have calculated the sum of binary tree uptil now
		// so traversal is done now
	        Node * root = new Node();
	        leavesofbinarytree(root);
}
}
