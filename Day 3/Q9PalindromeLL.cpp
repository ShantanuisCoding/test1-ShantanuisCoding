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

bool PalindromeLL (Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = slow;

    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    Node* first = head;
    Node* second = prev;

    while (second != NULL) {
        if (first->data != second->data) {
            return false;
        }
        first = first->next;
        second = second->next;
    }

    return true;
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
    insert(head, 2);
    insert(head, 1);

    cout << "Is the linked list a palindrome? " << PalindromeLL(head) << endl;

    return 0;
}