/*
 ----------------------- Day 42 ----------------------
 ----- Level order traversal in Binary Trees     ----------
 --- Date: 19.06.2021---------------------------------
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
            data= val;
            left=NULL;
            right=NULL;
        }
};

void displayLevelOrder(Node* root){
    if(root == NULL){
        return ;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()){
        Node* node = q.front();

        q.pop();

        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left);
                q.push(node->left);

            if(node->right)
                q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    {
        /* code */
    }
    

}

int main(void){

    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    displayLevelOrder(root);

    return 0;
}

/**
 * Sample Output 
 * 
 * 1 2 3 4 5 6 7 
 * 
 * */ 