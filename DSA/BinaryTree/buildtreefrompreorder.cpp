
/*
 ----------------------- Day 40 ----------------------
 ----- Build Binary Trees from preorder     ----------
 --- Date: 17.06.2021---------------------------------
 Author: Muhammad Arslan Shahzad, 
 ------------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node * right;

        Node(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

int search(int inorder[], int strt, int end, int curr){
    for(int i=strt; i<=end; i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int pre[], int inorder[], int strt, int end){
    static int index=0;

    if(strt>end){
        return NULL;
    }

    int current= pre[index];
    index++;
    Node* node= new Node(current);

    if(strt == end){
        return node;
    }

    int postorder = search(inorder, strt, end, current);
    node->left=buildTree(pre, inorder, strt, postorder-1);
    node->right=buildTree(pre, inorder, postorder+1, end);
    
    return node;
}

void dispalyInorder(Node* root){
    if(root == NULL){
        return;
    }

    dispalyInorder(root->left);
    cout<<root->data<<" ";
    dispalyInorder(root->right);
}

int main(void){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    Node* root =buildTree(preorder, inorder, 0 , 4);
    dispalyInorder(root);


    return 0;
}

/**
 * Sample Output 
 * 
 * 4 2 1 5 3 
 * 
 * */ 