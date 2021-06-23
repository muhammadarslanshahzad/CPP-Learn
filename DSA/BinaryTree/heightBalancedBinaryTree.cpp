/*
 ----------------------- Day 46 ----------------------
 ----- Height Balanced Binary Trees     ----------
 --- Date: 23.06.2021---------------------------------
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

int height(Node* root){
    if(root == NULL){
        return -1;
    }
    int lh = height(root->left);
    int rh = height(root->right);

    return max(lh, rh)+1;
}

bool isBalanced(Node* root){
    if(root == NULL){
        return true;
    }

    if(isBalanced(root->left) == false){
        return false;
    }
    if(isBalanced(root->right) == false){
        return false;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    if(abs(leftHeight-rightHeight) <= 1){
        return true;
    }
    else{
        return false;
    }
} 


int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    if(isBalanced(root)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"UnBalanced Tree"<<endl;
    }

    Node* root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(4);

    if(isBalanced(root1)){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"UnBalanced Tree"<<endl;
    }



    return 0;
}

/**
 * Sample Output 
 * 
 *  Balanced Tree
    UnBalanced Tree
 * 
 * */ 