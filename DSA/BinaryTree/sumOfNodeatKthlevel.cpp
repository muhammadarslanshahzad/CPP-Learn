/*
 ----------------------- Day 42 ----------------------
 ----- sum of Binary Trees at Kth level     ----------
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

int sumAtK(Node* root, int k){
    if(root == NULL){
        return -1;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int l = 0;
    int s = 0;

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();

        if(node != NULL){
            if(l == k){
                s += node-> data;
            }
            if(node->left){
                q.push(node->left);
            }

            if(node->right){
                q.push(node->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            l++;
        }
    }
    return s;
}

int32_t main(void){

    Node * root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout<<sumAtK(root ,2)<<endl;
    
    return 0;
}

/**
 * Sample Output 
 * 
 * 22
 * 
 * */ 