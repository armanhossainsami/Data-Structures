#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};


node* insert(node* head, int data) {
    node* newNode = new node;
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return newNode;
    }

    node* temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp-> next = newNode;

    return head;

}

void print(node* head) {
    node* temp = head;

    while(temp != NULL) {
        cout << temp->data << " " << "-> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main () {

    node* head = NULL;
    head = insert(head, 10);
    head = insert(head, 20);
    head = insert(head, 30);
    head = insert(head, 40);
    head = insert(head, 50);
    head = insert(head, 60);

    print(head);


    return 0;
}
