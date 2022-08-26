/*Purpose: This the basics of a linked list*/

#include <iostream>
using namespace std;

 
struct node {  // our node, made up of some data, and a pointer to next element
    int data;
    node* next;
};


void deleteList(node*& head) { //passed by reference, because we modified actual pointer
  
        node* temp;
        while (head != nullptr) {
            temp = head->next;
            delete head;
            head = temp;
        }
       
       
}



void print(node* head) {
    if (head == nullptr) {
        cout << "list is empty" << endl;

    }
    else {
        while (head != nullptr) {
            cout << head->data << "\n";
            head = head->next;
        }
    }
}

int main()
{

    node* tail = nullptr;
    node* head = nullptr;

    node* student1 = new node;
    node* student2 = new node;
    node* student3 = new node;
    node* student4 = new node;




   
    student1->data = 1;
    student1->next = student2;

    head = student1;  // Set both head and tail pointers to first element
    tail = student1;


  
    student2->data = 2;
    student2->next = student3;

    tail->next = student2;  // extend the next pointer to point to the new node
    tail = tail->next;     //traverse the tail to the next node

   
    student3->data = 3;
    student3->next = student4;

    tail->next = student3;
    tail = tail->next;

  
    student4->data = 4;
    student4->next = nullptr;

    tail->next = student4;   // extend the next pointer to point to the new node





    print(head);
    delete(head);
    head = nullptr;
    print(head);





    return 0;
}
