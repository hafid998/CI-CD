#include <iostream>
#define MAX 100

using namespace std;

class Stack {
private:
    int top;
    int arr[MAX];

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top >= MAX - 1) {
            cout << "Stack overflow\n";
        } else {
            arr[++top] = value;
            cout << "Pushed " << value << " to stack.\n";
        }
    }

    void pop() {
        if (top < 0) {
            cout << "Stack underflow\n";
        } else {
            cout << "Popped " << arr[top--] << " from stack.\n";
        }
    }

    void display() {
        if (top < 0) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();

    return 0;
}

