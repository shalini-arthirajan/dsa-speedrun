#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Stack {
    Node* top;

public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->next = top;
        top = temp;
    }

    int pop() {
        if (top == NULL) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        Node* temp = top;
        int val = temp->data;
        top = top->next;

        delete temp;
        return val;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << s.pop() << " popped from stack" << endl;

    return 0;
}