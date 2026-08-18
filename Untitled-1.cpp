#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;

        Node(int value){
            data = value;
            prev = nullptr;
            next = nullptr;
        }
};

int main(){
    // first node - head of the list
    Node* head = new Node(10);

    // second node
    head->next = new Node(20);
    head->next->prev = head;

    //third node
    head->next->next = new Node(30);
    head->next->next->prev = head->next;

    //fourth node
    head->next->next->next = new Node(40);
    head->next->next->next->prev = head->next->next;

    //traversal
    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data;
        if (temp->next != nullptr){
            cout << " <-> ";
        }
        temp = temp->next;
    }

    // insertion

    Node* nextNode = curr->next;

    newNode->next = nextNode
    newNode->prev = curr;

    if (nextNode){
        nextNode->prev = newNode;
    }

    curr->next = newNode;
}