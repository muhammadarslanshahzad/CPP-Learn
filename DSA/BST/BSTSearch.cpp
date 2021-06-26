/*
 ----------------------- Day 49----------------------
 ----- Search in Binary Search Trees     ----------
 --- Date: 26.06.2021---------------------------------
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

Node* SearchBST(Node* root, int key){
    if(root == NULL){
        return NULL;
    } 
    if(root->data == key){
        return root;
    }

    if(root->data > key){
        return SearchBST(root->left, key);
    }
    
    return SearchBST(root->right, key);

}


int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);   

    if(SearchBST(root , 5) == NULL){
        cout<< "key does not exist"<<endl;
    }
    else{
        cout<<" key exist "<<endl;
    }
 
    if(SearchBST(root , 15) == NULL){
        cout<< "key does not exist"<<endl;
    }
    else{
        cout<<" key exist "<<endl;
    }

    


    return 0;
}

/**
 * Sample Output 
 * 
 * 1 2 3 4 5 7 
 * */ 