// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
//     node*prev;
// };

// int main(){
//     node*head=NULL;
//     node*n1=new node();
//     n1->data=10;
//     n1->next=NULL;
//     n1->prev=NULL;
//     head=n1;
//     node*n2=new node();
//     n2->data=20;
//     n2->next=NULL;
//     n2->prev=n1;
//     n1->next=n2;
//     node*n3=new node();
//     n3->data=30;
//     n3->next=NULL;
//     n3->prev=n2;
//     n2->next=n3;
//     node*temp=head;
//     cout<<"Forward list -";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }cout<<endl;
//     cout<<"Backward list -";
//     node*temp1=n3;
//     while(temp1!=NULL){
//         cout<<temp1->data<<" ";
//         temp1=temp1->prev;
//     }
// }


//string one 

#include<iostream>
using namespace std;
struct node{
    string data;
    node*next;
    node*prev;
};

int main(){
    node*head=NULL;
    node*n1=new node();
    n1->data="Arnav";
    n1->next=NULL;
    n1->prev=NULL;
    head=n1;
    node*n2=new node();
    n2->data="Bharath";
    n2->next=NULL;
    n2->prev=n1;
    n1->next=n2;
    node*n3=new node();
    n3->data="Khan";
    n3->next=NULL;
    n3->prev=n2;
    n2->next=n3;
    node*temp=head;
    cout<<"Forward list -";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    cout<<"Backward list -";
    node*temp1=n3;
    while(temp1!=NULL){
        cout<<temp1->data<<" ";
        temp1=temp1->prev;
    }
}