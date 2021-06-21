/*
 ----------------------- Day 43 ----------------------
 ----- height of  Binary Trees     ----------
 --- Date: 21.06.2021---------------------------------
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
            left= NULL;
            right=NULL;
        }
};

int heightOfTree(Node* root){
    if(root== NULL){
        return 0;
    }
    int left_height= heightOfTree(root->left);
    int right_height= heightOfTree(root->right);

    return max(left_height, right_height)+1;

}


int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Height of the Tree is: "<<heightOfTree(root)<<" ";

    return 0;
}

/**
 * Sample Output 
 * 
 * Height of the Tree is: 3 
 * 
 * */ 