/*
 ----------------------- Day 44 ----------------------
 ----- Sum Replacement in Binary Trees     ----------
 --- Date: 22.06.2021---------------------------------
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

void SumReplace(Node* root){

    if(root == NULL){
        return;
    }

    SumReplace(root->left);
    SumReplace(root->right);

    if(root->left != NULL){
        root->data += root->left->data;
    }

    if(root->right != NULL){
        root->data += root->right->data;
    }
}

void preOrder(Node* root){

    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    preOrder(root);
    cout<<endl;
    SumReplace(root);
    preOrder(root);
    cout<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 *  1 2 4 5 3 6 7 
 *  28 11 4 5 16 6 7
 * 
 * */ 