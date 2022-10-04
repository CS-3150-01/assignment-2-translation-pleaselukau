#include <stdio.h>
   struct BinarySearchTree {
   //Represent the root of binary tree
        struct Node {
            int datax;
            int left;
            int right;
        }; };
            void Node(int data) {
                //Assign data to the new node, set left and right children to null
                struct Node node;
                node.datax = data;
                node.left;
                node.right;
            }


        //Represent the root of binary tree
        struct Node root;

       void BinarySearchTree() {
           root ; //= null;
       }

       //factorial() will calculate the factorial of given number

 int factorial(int num) {
    int fact = 1;
    if (num == 0)
        return 1;
    else {
        while (num > 1) {
            fact = fact * num;
            num--;
        }
        return fact;
    }
}

//numOfBST() will calculate the total number of possible BST by calculating Catalan Number for given key

int numOfBST(int key) {
    int catalanNumber = factorial(2 * key) / (factorial(key + 1) * factorial(key));
    return catalanNumber;
}

int main() {
    struct BinarySearchTree bt ;
    //Display total number of possible binary search tree with key 5
    printf("Total number of possible Binary Search Trees with given key: %i", numOfBST(5));
    return 0;
}
