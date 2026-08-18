#include <stdio.h>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* head = NULL;

void insertBeginning(int x){

    Node* n = new Node();
    n->data = x;
    n->next = NULL;

    if (head == NULL){
        head = n;
        return;
    }

    Node* temp = head;
    while (temp-> next != NULL){
        temp = temp->next;
    }

    temp->next = n;
}