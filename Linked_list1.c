#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* link;
};
struct Node* head;
void Insert(int x) {

    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> link = head;
    head = temp;
}
void Print() {
    struct Node* temp =head;
    printf("List is: ");
    while(temp!=NULL) {
        printf("%d ",temp -> data);
        temp = temp -> link;
    }
    printf("\n");
}
int main() {
    head = NULL;

    printf("How many numbers?");
    int n,x;
    scanf("%d",&n);

    for(int i=0; i<n; i++) {
        printf("Enter the number: ");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
}