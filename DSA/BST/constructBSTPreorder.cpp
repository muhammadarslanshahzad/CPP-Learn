/*
 ----------------------- Day 51----------------------
 -----  Construct Binary Search Trees from preorder     ----------
 --- Date: 28.06.2021---------------------------------
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
Node* constructBST(int preorder[], int* preorderIdx, int key, int min, int max, int n){
    if(*preorderIdx >= n){
        return NULL;
    }
    Node* root = NULL;
    if(key > min && key < max){
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if(*preorderIdx < n){
            root->left = constructBST(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }

        if(*preorderIdx < n){
            root->right = constructBST(preorder, preorderIdx, preorder[*preorderIdx], key,max, n);
        }
    }   
    return root;
}

void displayPreorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<<root->data<<" ";
    displayPreorder(root->left);
    displayPreorder(root->right);
}

int main(void){


    int preorder[] = {10,2,1,14,11};
    int n= 5; 
    int preorderidx = 0;
    Node* root =   constructBST(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX,n);
    displayPreorder(root);
    return 0;
}

/**
 * Sample Output 
 * 
 * 10 2 1 14 11 
 * */ 