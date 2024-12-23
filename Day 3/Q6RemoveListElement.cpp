#include <iostream>
using namespace std;

class Node {
    public:
    Node* next;
    int data;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insert (Node* head, int data) {
    Node* temp = head;
    while (temp-> next != NULL){
        temp = temp -> next;
    }

    temp -> next = new Node(data);
}

void RemoveElement(Node* head, int val) {
    Node* temp = head;
    while (temp->next != NULL) {
        if (temp->next->data == val) {
            temp->next = temp->next->next;
        } else {
            temp = temp->next;
        }
    }
}

void print(Node*head, int data){
    Node* temp = head;
    while (temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    insert(head, 2);
    insert(head, 6);
    insert(head, 3);

    cout << "Enter the element to remove: ";
    int val;
    cin >> val;

    RemoveElement(head, val);

    cout << "List after removing " << val << ": ";
    print(head, val);

    return 0;
}

