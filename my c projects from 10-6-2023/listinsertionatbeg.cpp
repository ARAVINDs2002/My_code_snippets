 #include<iostream>
 using namespace std;
 class node{public:int data;node*next;};
 void insertion(node*&head,int data)
 {
     node*newnode=new node;
     newnode->data=data;
     newnode->next=head;
     head=newnode;
     if(head==nullptr)
     {
         head=newnode;
     }

 }
 void printer(node*h)
 {
     while(h!=nullptr)
     {
         cout<<h->data<<"->";
         h=h->next;
     }
 }

 int main()
 {
     node*head=nullptr;
     insertion(head,1);
     insertion(head,2);
     insertion(head,3);
     printer(head);
 }
