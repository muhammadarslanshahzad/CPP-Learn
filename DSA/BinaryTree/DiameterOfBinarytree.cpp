/*
 ----------------------- Day 44 ----------------------
 ----- Diameter of  Binary Trees     ----------
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

int diameterOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int left_height= heightOfTree(root->left);
    int right_height= heightOfTree(root->right);

    int currDiamter = left_height+right_height+1;

    int ldiameter= diameterOfTree(root->left);
    int rdiameter=diameterOfTree(root->right);

    return max(currDiamter, max(ldiameter, rdiameter));
}



int main(void){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<"Diameter of the Tree is: "<<diameterOfTree(root)<<" ";

    return 0;
}

/**
 * Sample Output 
 * 
 * Height of the Tree is: 3 
 * Diameter of the Tree is: 5 
 * 
 * */ 