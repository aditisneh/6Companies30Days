class Solution
{
    public:
     
     
    //Function to serialize a tree and return a list containing nodes of tree.
    vector<int> serialize(Node *root) 
    {
         vector<int> ans;
        //Your code here
        if(root==NULL) {
            ans.push_back(-1);
            return ans;
        }
        serialize(root->left);
        cout<<root->data<<" ";
        serialize(root->right);
    
    }

    int i=0;
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       if(A.size()==0) return NULL;
       
       if(A[i]==-1){
           i++;
           return NULL;
       }
       Node *root = new Node(A[i+1]);
       root->left = deSerialize(A);
       root->right = deSerialize(A);
       return root;
    }

};