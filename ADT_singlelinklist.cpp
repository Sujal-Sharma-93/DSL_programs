#include <iostream>
using namespace std;
struct Node{
    Node *next;
    int data;
};
class SinglyLinkedList{
    private:
         Node* head;
         
    public:
    SinglyLinkedList(){
        head = NULL;
    }

    void insertbeginning(int value){
        Node * nn = new Node ;
        nn -> next=NULL;
        nn -> next=head;
        nn -> data=value;
        head =nn;
        cout<<"\nInserted at beginning successfully\n"    ;
    }
    void insertend(int value){
        Node* nn= new Node;
        nn->data=value;
        nn->next=NULL;
        if(head==NULL){
            head=nn;
            cout<<"List was empty.Node inserted as first node .\n";
            return;
        }
        
        Node* temp=head;
        while(temp->next !=NULL){
            temp=temp->next;
        }
        temp->next=nn;
        cout<<"\nInserted successfully.";
        
    }
    
    void insertAtPosition(int value,int pos){
        if(pos==1){
            insertbeginning(value);
            return;
        }
        Node* nn= new Node;
        nn->data=value;
        nn->next=NULL;
        Node *temp= head;
        for(int i=1;i<pos-1 && temp!=NULL;i++){
            temp=temp->next;
        }
        if(temp==NULL){
            cout<<"\nInvalid position ";
            return;
        }
        nn->next=temp->next;
        temp->next=nn;
        cout<<"\nInserting at the position "<<pos<<"Successfull\n";
    }
    void deletebeginning(){
        if(head==NULL){
            cout<<"\nList is empty ";
            return;
        }
        Node *temp=head;
        head=head->next;
        delete temp;
        cout<<"\nDeleted from beginning successfully";
    }
    void deleteEnd(){
        if(head==NULL){
            cout<<"\nList is empty ";
            return;
        }
        if(head->next==NULL){
            delete head;
            head = NULL;
            cout << "Last node deleted. List is now empty.\n";
            return;
        }
        Node* temp = head;
        while (temp->next->next != NULL) {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
        cout << "Deleted from End Successfully\n";
    }
    void deleteAtPosition(int pos) {
        if (head == NULL) {
            cout << "List is Empty\n";
            return;
        }
        
        if (pos == 1) {
            deletebeginning();
            return;
        }
        
        Node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next != NULL; i++) {
            temp = temp->next;
        }
        
        if (temp->next == NULL) {
            cout << "Invalid Position\n";
            return;
        }
        
        Node* delNode = temp->next;
        temp->next = delNode->next;
        delete delNode;
        cout << "Deleted from Position " << pos << " Successfully\n";
    }  
    void search(int key) {
        Node* temp = head;
        int position = 1;
        
        while (temp != NULL) {
            if (temp->data == key) {
                cout << "Element found at position: " << position << endl;
                return;
            }
            temp = temp->next;
            position++;
        }
        cout << "Element not found in the list\n";
    };
        // Display List
    void display() {
        if (head == NULL) {
            cout << "List is Empty\n";
            return;
        }
        
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main(){
    SinglyLinkedList list;
    int ch,value,pos;
    do{
        cout<<"\n=======Singly linked list=========\n";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n2.";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n1.Inserting at beginning";
        cout<<"\n9.Exit\n";
        switch (ch) {
                case 1:
                    cout << "Enter value: ";
                    cin >> value;
                    list.insertbeginning(value);
                    break;
            
                case 2:
                    cout << "Enter value: ";
                    cin >> value;
                    list.insertend(value);
                    break;
            
                case 3:
                    cout << "Enter value and position: ";
                    cin >> value >> pos;
                    list.insertAtPosition(value, pos);
                    break;
            
                case 4:
                    list.deletebeginning();
                    break;
            
                case 5:
                    list.deleteEnd();
                    break;
            
                case 6:
                    cout << "Enter position: ";
                    cin >> pos;
                    list.deleteAtPosition(pos);
                    break;
            
                case 7:
                    cout << "Enter element to search: ";
                    cin >> value;
                    list.search(value);
                    break;
            
                case 8:
                    list.display();
                    break;
            
                case 9:
                    cout << "Exiting Program...\n";
                    break;
            
                default:
                    cout << "Invalid Choice! Try Again.\n";
            }
            
        } while (ch != 9);
            
        return 0;
    }
        
