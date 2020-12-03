#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node*left;
node*right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
class bst{
public:
  node*root;
  bst(){
      root=NULL;
  }
  void insert(int v){
      node*tmp=new node(v);
      if(root==NULL){
          root=tmp;
          cout<<"value inserted at root node \n";
          return;
      }
      else{
          node*ptr=root;
          while(ptr!=NULL){
              if(ptr->data==v){
                  cout<<"no duplicates are allowed \n";
                  return;
              }
              else if(v<ptr->data && ptr->left==NULL){
                  ptr->left=tmp;
                  cout<<"value inserted at left node \n";
                  break;
              }
              else if(v<ptr->data){
                  ptr=ptr->left;
              }
              else if(v>ptr->data && ptr->right==NULL){
                  ptr->right=tmp;
                   cout<<"value inserted at right node\n";
                   break;
              }
              else{
                  ptr=ptr->right;
              }
          }
      }
  }
};
int main(){
    bst ob;
    ob.insert(5);
    ob.insert(8);
    ob.insert(2);
  cout<<ob.count_node(ob.root)<<" \n";
    return 0;
}

