#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* Next;
    Node* Prev;
};

// Insertion at end
void InsertAtEnd(Node*& head, int value) {
    Node* newnode = new Node();
    newnode->data = value;
    newnode->Next = NULL;
    newnode->Prev = NULL;

    if (head == NULL) {
        head = newnode;
        return;
    }

    Node* temp = head;
    while (temp->Next != NULL) {
        temp = temp->Next;
    }

    temp->Next = newnode;
    newnode->Prev = temp;
}

// Search function
bool search(Node* head, int key) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            return true;
        }
        temp = temp->Next;
    }
    return false;
}

// Delete node by value
void deleteByValue(Node*& head, int value) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }


    if (!search(head, value)) {
        cout << "Value " << value << " not found in the list." << endl;
        return;
    }

    Node* temp = head;

    while (temp != NULL && temp->data != value) {
        temp = temp->Next;
    }

    if (temp == head) {
        head = head->Next;
        if (head != NULL) {
            head->Prev = NULL;
        }
        delete temp;
        return;
    }

   
    if (temp->Next != NULL) {
        temp->Next->Prev = temp->Prev;
    }
    if (temp->Prev != NULL) {
        temp->Prev->Next = temp->Next;
    }

    delete temp;
}

// Display list
void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

// Main function
int main() {
    Node* head = NULL;

    InsertAtEnd(head, 10);
    InsertAtEnd(head, 20);
    InsertAtEnd(head, 30);
    InsertAtEnd(head, 40);


    display(head);

    deleteByValue(head, 30);  // delete value 30

   
    display(head);

    deleteByValue(head, 10);  // delete head

  
    display(head);

    deleteByValue(head, 50);  // value not in list

    return 0;
}
