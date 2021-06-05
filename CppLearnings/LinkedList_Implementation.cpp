
#include <bits/stdc++.h>
using namespace std;

class node{
  public:
   int d;
   node*next;
   node(int v){
       d=v;
       next=nullptr;
   }
};
 void insertEnd(node*head,int v){
       node*ptr=new node(v);
       if(head==nullptr){
           head=ptr;
           head->next=nullptr;
       }else{
           node*tmp=head;
           while(tmp->next!=nullptr){
               tmp=tmp->next;
           }
           tmp->next=ptr;
           tmp->next->next=nullptr;
       }
   }
   
 node* insBeg(node*head,int v){
     node*tmp=new node(v);
     tmp->next=head;
     head=tmp;
     return head;
 }  
 void show(node*head){
       node*tmp=head;
       while(tmp!=nullptr){
           cout<<tmp->d<<" ";
           tmp=tmp->next;
       }
       cout<<"\n";
   }
   int lenth(node*head){
       int t=0;
       node*ptr=head;
       while(ptr!=nullptr){
           t++;
           ptr=ptr->next;
       }
       return t;
   }
   
   node* bet(node*head,int p,int v){
       node*tmp=new node(v);
       int i=1;
       node*slow=head;
       node*fast=head->next;
       while(i<p-1){
           i++;
           slow=slow->next;
           fast=fast->next;
       }
       tmp->next=fast;
       slow->next=tmp;
       return head;
   }
   node* delEnd(node*head){
       node*tmp=head;
       while(tmp->next->next){
           tmp=tmp->next;
       }
       tmp->next=nullptr;
       cout<<" \n value has been deleted at the end \n";
       return head;
   }
   node* delS(node*head){
       cout<<"\n value has been deletd at the beginning\n";
       head=head->next;
       return head;
   }
   node* delp(node*head,int p){
       node*tmp=head;
       int i=1;
       node*fast=head->next;
       node*slow=head;
       while(i<p-1){
           i++;
           slow=slow->next;
           fast=fast->next;
       }
       slow->next=fast->next;
       cout<<"\n the value has been deleted at the position "<<p<<"\n";
       return head;
   }

int main()
{
node*head=new node(5);
show(head);
insertEnd(head,6);
insertEnd(head,7);
insertEnd(head,8);
head=insBeg(head,2);
show(head);
int t=lenth(head);
head=bet(head,3,45);
show(head);
cout<<"length of the linked list = "<<t<<endl;
delEnd(head);
show(head);
head=delS(head);
show(head);
head=delp(head,3);
show(head);
    return 0;
}

