/*
 ----------------------- Day 52----------------------
 -----  Check if Binary Search Trees or not  ----------
 --- Date: 29.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

//Construct BST from Preorder
bool isBST(Node* root, Node* max=NULL, Node* min=NULL){
    if(root == NULL){
        return false;
    }
    if(root->data <= min->data && min !=NULL){
        return false;
    }

    if(max != NULL, root->data>= max->data){
        return false;
    }

    bool leftValid = isBST(root->left, root, min);
    bool rightValid = isBST(root->right, max, root);
    return leftValid and rightValid;
}

int main(void){

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->right = new Node(3);

    if(isBST(root1, NULL, NULL)){
        cout<<"Valid BSt"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }

    Node* root2 = new Node(5);
    root2->left = new Node(2);
    root2->right = new Node(8);

    if(isBST(root2, NULL, NULL)){
        cout<<"Valid BSt"<<endl;
    }
    else{
        cout<<"Invalid BST"<<endl;
    }

    return 0 ;
}

/**
 * Sample Output 
 * 
 * 10 2 1 14 11 
 * */ 