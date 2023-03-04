#include <bits/stdc++.h> 
void order(TreeNode < int > * root , vector < int > &inorder , vector < int > &value ) {
        if(!root) {
         return;
      }

      order(root->left , inorder , value);

      inorder.push_back(root->data);
      value.push_back(root->data);

      order(root->right , inorder , value);
}

int canFix(TreeNode < int > * root) {
   vector <int> inorder,value;

   order(root , inorder , value);
   sort(value.begin() , value.end());

   int count = 0 , n = value.size();
   int canconvert = 1;
   for(int i = 0 ; i < n ; i++) {

      if(i + 1 < n and value[i] == value[i + 1]) {
         canconvert = 0;
      }

      if(value[i] != inorder[i]) {
         count++;
      }
   }

   if(count > 2)
      canconvert = 0;
   
   return canconvert;
} 
