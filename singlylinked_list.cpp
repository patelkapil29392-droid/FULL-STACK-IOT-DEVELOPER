#include<iostream>
using namespace std;
struct Node {
    int data;
    Node *next;

};
typedef struct Node node;
node *head = NULL;
    node *temp,*temp1;

void insert(int data) {
    temp = new node;
    temp->data = data;
    temp->next = NULL;
    if (head==NULL){
    head=temp;
}
    else {
        temp1=head;
        while(temp1->next!=NULL) {
            temp1=temp1->next;
        }
        temp1->next = temp;
    }
}
void display() {
    if (head==NULL) {
        cout<<"List is empty"<<endl;
    }
    else {
        temp1 = head;
        while(temp1!=NULL) {
            cout<<temp1->data<<"\t";
            temp1 = temp1->next;
        }
        cout<<"\n";
    }
}
void remove() {
    if (head==NULL) {
        cout<<"List is empty"<<endl;
    }
    else {
        temp1 = head;
        while(temp1->next !=NULL) {
            temp = temp1->next;
            delete temp1;
            temp1 = temp;
        }
    }
    head=NULL;
}

int main() {
        int choice;

    do {
        cout<<"enter 1.Insert Node"<<endl;
        cout<<"enter 2.Delete Node"<<endl;
        cout<<"enter 3.Display List"<<endl;
        cout<<"enter 4.Exit"<<endl;
        cout<<"enter choice "<<endl;
        cin>>choice;
        switch (choice) {
            case 1:
                int data;
                cout<<"enter data"<<endl;
                cin>>data;
                insert(data);
                break;
            case 2:
                remove();

                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"enter valid choice"<<endl;
                break;

        }
    }
        while (choice != 4);

}



