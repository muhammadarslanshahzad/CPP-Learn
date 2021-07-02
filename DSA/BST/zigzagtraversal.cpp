/*
 ----------------------- Day 55 ----------------------
 ----- Sorted array to  Binary Search Trees     ----------
 --- Date: 02.07.2021---------------------------------
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


void zigZagTraversal(Node* root){
    if(root == NULL){
        return ;
    }

    stack<Node*> currLevel;
    stack<Node*> nextLevel;
    bool lefttoright = true;

    currLevel.push(root);

    while (!currLevel.empty())
    {
         Node* temp = currLevel.top();
         currLevel.pop();

         if(temp){
             cout<<temp->data<<" ";
         

            if(lefttoright){
                if(temp->left){
                    nextLevel.push(temp->left);
                }
                if(temp->right){
                    nextLevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextLevel.push(temp->right);
                }
                if(temp->left){
                    nextLevel.push(temp->left);
                }
            }
        }
        if(currLevel.empty()){
            lefttoright = !lefttoright;
            swap(currLevel, nextLevel);   
        }

    }
    


}


int main(void){

    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);
    
    zigZagTraversal(root);
    cout<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 * 12 15 9 5 10
 * 
 * */ 