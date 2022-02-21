TreeNode* h(vector<int>& nums, int start, int end){
        if(start>end) return NULL;
        
        if(start == end){
            TreeNode* newNode = new TreeNode(nums[start]);
            return newNode;
        }
        
        int index = (start+end)/2;
        TreeNode* root = new TreeNode(nums[index]);
        
        root->left = h(nums,start,index-1);
        root->right = h(nums,index+1,end);
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return h(nums,0,nums.size()-1);
    }