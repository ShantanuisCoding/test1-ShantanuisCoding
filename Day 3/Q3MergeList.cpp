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

Node* MergeLL (Node* list1, Node* list2) {
    Node* head = new Node(0);
    Node* temp = head;

    while (list1 != NULL && list2 != NULL) {
        if (list1->data < list2->data) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }
        temp = temp->next;
    }

    if (list1 != NULL) {
        temp->next = list1;
    } else {
        temp->next = list2;
    }

    return head->next;
}

int main() {
    Node* list1 = new Node(1);
    insert(list1, 2);
    insert(list1, 4);

    Node* list2 = new Node(1);
    insert(list2, 3);
    insert(list2, 4);

    Node* result = MergeLL(list1, list2);

    while (result != NULL) {
        cout << result->data << " ";
        result = result->next;
    }
    cout << endl;

    return 0;
}