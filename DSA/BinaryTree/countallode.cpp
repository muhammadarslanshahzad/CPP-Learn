/*
 ----------------------- Day 43 ----------------------
 ----- Count node in Binary Trees     ----------
 --- Date: 20.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;

        Node(int val){
            data= val;
            left=NULL;
            right=NULL;
        }
};

int sumOfNodes(Node* root){
    if(root == NULL){
        return 0;
    }

    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

int main(void){

    Node* root = new Node(1);
    root->left=new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->left = new Node(7);
    
    cout<<sumOfNodes(root)<<" ";
    return 0;
}

/**
 * Sample Output 
 * 
 * 22
 * 
 * */ 