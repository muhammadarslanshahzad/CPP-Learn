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

int catlan(int n){
    if(n<=1){
        return 1;
    }
    int res =0; 
    for(int i=0; i<=n-1; i++){
        res += catlan(i) * catlan(n-i-1);
    }
    return res;
}

vector<Node*> constructTree(int start, int end){
    vector<Node*> trees;

    if(start>end){
        trees.push_back(NULL);
        return trees;
    }

    for(int i=start; i<=end; i++){
        vector<Node*> leftSubtree = constructTree(start, i-1);
        vector<Node*> rightSubtree = constructTree(i+1, end);   

        for(int j=0; j<leftSubtree.size(); j++){
            Node* left = leftSubtree[j];
            for(int k=0; k<rightSubtree.size(); k++){
                Node* right = rightSubtree[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }           
        }
    }
    return trees;
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
    for(int i=0; i<10; i++){
        cout<<catlan(i)<<" ";
    }
    cout<<endl;  
    
    vector<Node*> Ttrees = constructTree(1,3);
    for(int i=0; i<Ttrees.size(); i++){
        cout<<(i+1)<<" : ";
        preorder(Ttrees[i]);
        cout<<endl;
    }
    
    
    return 0;

}

/**
 * Sample Output 
 * 
 * 1 1 2 5 14 42 132 429 1430 4862 
    1 : 1 2 3
    2 : 1 3 2
    3 : 2 1 3 
    4 : 3 1 2
5 : 3 2 1
 * */ 