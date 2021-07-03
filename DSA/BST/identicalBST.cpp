/*
 ----------------------- Day 56 ----------------------
 ----- Identical  Binary Search Trees     ----------
 --- Date: 03.07.2021---------------------------------
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

bool isIdentical(Node* root1, Node* root2){
    if(root1 == NULL && root2 == NULL){
        return true;
    }
    else if(root1 ==NULL || root2== NULL){
        return false;
    }
    else{
        bool con1 = root1->data == root2->data;
        bool con2 = isIdentical(root1->left, root2->left);
        bool con3 = isIdentical(root1->right, root2->right);
        
        if(con1 && con2 && con3){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    Node* root1 = new Node(4);
    root1->left = new Node(5);
    root1->right = new Node(6);
    
    if(isIdentical(root, root)){
        cout<<"BST are identical"<<endl;
    }
    else{
        cout<<"BST are not identical"<<endl;    
    }

    if(isIdentical(root1, root1)){
        cout<<"BST are identical"<<endl;
    }
    else{
        cout<<"BST are not identical"<<endl;    
    }

    
    
    if(isIdentical(root, root1)){
        cout<<"BST are identical"<<endl;
    }
    else{
        cout<<"BST are not identical"<<endl;    
    }



    
    return 0;
}

/**
 * Sample Output 
 * 
 *  BST are identical
 *  BST are identical
 *  BST are not identical
 * 
 * */ 