/*
 ----------------------- Day 41 ----------------------
 ----- Binary Trees     ----------
 --- Date: 18.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node * left;
        Node * right;
        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

int searchtree(int inorder[], int strt, int end , int val){
    for(int i=strt; i<=end; i++){
        if(inorder[i] == val){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[], int inorder[], int strt, int end){
    static int index= 4;
    
    if(strt>end){
        return NULL;
    }
    
    int val= postorder[index];

    index--;
    Node * curr = new Node(val);
    if(strt == end){
        return curr;
    }

    int pos = searchtree(inorder, strt , end, val);
    curr->right= buildTree(postorder, inorder, pos+1, end);
    curr->left= buildTree(postorder, inorder, strt, pos-1);

    return curr;

}

void display(Node* root){
    if(root == NULL){
        return ;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);

}


int main(void){
    int postorder[] ={4,2,5,3,1};
    int inorder[] ={4,2,1,5,3};

    Node* root = buildTree(postorder, inorder, 0 , 4);
    display(root);
    cout<<endl;

    return 0;
}

/**
 * Sample Output 
 * 
 * 4 2 1 5 3 
 * 
 * */ 