#include <iostream>
using namespace std;

int stack[5];
int top = -1;

void push(int x) {
    if (top == 4) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = x;
    cout << x << " pushed to stack" << endl;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    return stack[top--];
}

void display() {
    if (top == -1) {
        cout << "Stack is empty" << endl;
        return;
    }

    cout << "Stack elements: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;
}

int main() {
    push(10);
    push(20);
    push(30);

    display();

    cout << pop() << " popped from stack" << endl;

    display();

    return 0;
}