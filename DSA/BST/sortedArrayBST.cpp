/*
 ----------------------- Day 53 ----------------------
 ----- Sorted array to  Binary Search Trees     ----------
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

Node* sortedArray(int arr[], int strt, int end){
    if(strt > end){
        return NULL;
    }
    int mid = (strt+end)/2;

    Node* root = new Node(arr[mid]);

    root->left = sortedArray(arr, strt, mid-1);
    root->right = sortedArray(arr, mid+1, end);

    return root;
}

void preorder(Node* root){
    if(root == NULL){
        return ;
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main(void){

    int arr[] = {10,20,30,40,50};
    Node* root = sortedArray(arr, 0 , 4);
    preorder(root);
    cout<<endl;
    
    return 0;
}

/**
 * Sample Output 
 * 
 * 30 10 20 40 50 
 * */ 