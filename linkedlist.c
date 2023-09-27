
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{

    int data;
    struct node* next;
};
typedef struct node Node;

Node* get_node(int data){
    Node* newNode;
    newNode = (Node* )malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("no enough space available\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;

    return newNode;
}

Node* insertAtHead(Node* head,int data){
    Node* newNode;
    newNode = get_node(data);
    if(head==NULL) return newNode;
    newNode->next = head;
    head = newNode;

    return head;
}

Node* deleteAtHead(Node* head){
    Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

void display(Node* head){
    if(head==NULL){
        printf("The linked list is empty!!");
    }
    Node* temp = head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");

}

int main(){

    int choice,item;
    Node* head=NULL;
    while(1){
        printf("Enter\n1.Insert a node\n2.delete a node\n3.display ll\n4.exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: printf("\nEnter the item to be added");
                    scanf("%d",&item);
                    head = insertAtHead(head,item);
                    break;
            case 2: head = deleteAtHead(head);
                    break;
            case 3: display(head);
                    break;
            default: exit(0);
        }
    }

}