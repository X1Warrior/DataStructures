//
//  AVLTree.hpp
//  DataStructures
//
//  Created by Stout, Zachary on 4/17/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#ifndef AVLTree_hpp
#define AVLTree_hpp

#include "BinarySearchTree.hpp"

template <class Type>
class AVLTree : public BinarySearchTree<Type>
{
private:
    BinaryTreeNode<Type> * leftRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * leftRightRotation(BinaryTreeNode<Type> * parent);
    BinaryTreeNode<Type> * rightLeftRotation(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * balanceSubTree(BinaryTreeNode<Type> * parent);
    
    BinaryTreeNode<Type> * insertNode(BinaryTreeNode<Type> * parent, Type value);
    BinaryTreeNode<Type> * removeNode(BinaryTreeNode<Type> * parent, Type value);
    
    int heightDifference(BinaryTreeNode<Type> * node);
    
public:
    AVLTree();
    
    void insert(Type itemToInsert);
    void remove(Type value);
};
 /*
A negative value means the right is greater than the left
*/
tamplate <class Type>
int AVLTree<Type> :: heightDifference(binaryTreeNode<Type> * node)
{
    int balance;
    int leftHeight = this->calculateHeight(node->getLeftNode());
    int rightHeight = this->calculateHeight(node->getrightNode());
    balance = leftHeight - rightHeight;
    return Balance;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->geLeftNode();
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChilde(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->geLeftNode();
    
    parent->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeftChilde(parent);
    
    return changedNode;
}
    

#endif /* AVLTree_hpp */
