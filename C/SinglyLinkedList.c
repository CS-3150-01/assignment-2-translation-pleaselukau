#include <stdio.h>
//SinglyLinkedList {
//Represent a node of the singly linked list
    struct node {
        int data;
      struct node *next;
    };
//Represent the head and tail of the singly linked list
struct node *head = NULL;
struct node *tail = NULL;


        struct node Node(int data) {
            struct node newNode;
            newNode.data = data;
            newNode.next = NULL;
            return newNode;
        }



//addNode() will add a new node to the list
 void addNode(int data) {
    //Create a new node
    struct node newNode = Node(data);

    //Checks if the list is empty
    if(head == NULL) {
        //If list is empty, both head and tail will point to new node
        head = &newNode;
        tail = &newNode;
    }
    else {
        //newNode will be added after tail such that tail's next will point to newNode
        tail->next = &newNode;
        //newNode will become new tail of the list
        tail = &newNode;
    }
}


//display() will display all the nodes present in the list
 void display() {
    //Node current will point to head
    struct node *current = &head;

    if(head == NULL) {
        printf("List is empty");
    }
    printf("Nodes of singly linked list: ");
    while(current != NULL) {
        //Prints each node by incrementing pointer
        printf("%i ",current->data);
        current = &current->next;
    }
    printf("");
}
int main() {

   // SinglyLinkedList sList = new SinglyLinkedList();

    //Add nodes to the list
    addNode(1);
    addNode(2);
    addNode(3);
    addNode(4);

    //Displays the nodes present in the list
    display();
}
