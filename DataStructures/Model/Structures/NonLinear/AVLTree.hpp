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
    changedNode = parent->getLeftNode();
    
    parent->setLeftChild(changedNode->getRightNode());
    
    changedNode->setRightChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getLeftNode();
    
    parent->setRightChild(changedNode->getLeftNode());
    
    changedNode->setLeftChild(parent);
    
    return changedNode;
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: rightLeftRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setRightChild(leftRotation(changedNode));
    
    return rightRotation(parent);
}

template <class Type>
BinaryTreeNode<Type> * AVLTree<Type> :: leftrightRotation (BinaryTreeNode<Type> * parent)
{
    BinaryTreeNode<Type> * changedNode;
    changedNode = parent->getRightNode();
    
    parent->setLeftChild(rightRotation(changedNode));
    
    return leftRotation(parent);
}

template <class Type
BinaryTreeNode<Type> * AVLTree<Type> :: balncedSubTree (BinaryTreeNode<Type> * parent)
{
    int balnceFactor = heightDifference(parent)
    
    if(balnceFactor > 1)
    {
        if(heightDifference(parent->getLeftNode()) > 0)
        {
            parent = leftRotation(parent);
        }
        else
        {
            parent= leftRightRoation(parent);
        }
        if(balnceFactor < -1)
        {
            if(heightDifference(parent->getRightNode()) > 0)
            {
                parent = rightLeftRotation(parent);
            }
            else
            {
                parent= rightRoation(parent);
            }
        }
        return parent;
}
    
   
    template <class Type>
    BinaryTreeNode<Type> * AVLTree<Type> :: removeNode(BinaryTreeNode<Type> * parent, Type inserted)
    {
        if (parent == nullptr)
        {
            return parent;
        }
        if (inserted < parent->getNodeData())
        {
            parent->setLeftChild(removeNode(parent->getLeftNode(), inserted));
        }
        else if (inserted > parent->getNodeData())
        {
            parent->setRightChild(removeNode(parent->getRightNode(), inserted));
        }
        else
        {
            BinaryTreeNode<Type> * temp;
            if (parent->getLeftNode() == nullptr && parent->getRightNode() == nullptr)
            {
                temp = parent;
                delete temp;
            }
            else if (parent->getLeftNode() == nullptr)
            {
                *parent = *parent->getRightNode();
            }
            else if (parent->getRightNode() == nullptr)
            {
                *parent = *parent->getLeftNode();
            }
            else
            {
                BinaryTreeNode<Type> * leftMost = this->getLeftMostChild(parent->getRightNode);
                parent->setNodeData(leftMost->getNodeData());
                parent->setRightChild(removeNode(parent->getRightNode(), leftMost->getNodeData()));
            }
        }
        
        if (parent == nullptr)
        {
            return parent;
        }
        
        return balanceSubTree(parent);
    }
    
    template <class Type>
    BinaryTreeNode<Type> * AVLTree<Type> :: insertNode(BinaryTreeNode<Type> * parent, Type inserted)
    {
        if (parent == nullptr)
        {
            parent = new BinaryTreeNode<Type>(inserted);
            return parent;
        }
        else if (inserted < parent->getNodeData())
        {
            parent->setLeftChild(insertNode(parent->getLeftNode(), inserted));
            parent = balanceSubTree(parent);
        }
        else if (inserted > parent->getNodeData())
        {
            parent->setRightChild(insertNode(parent->getRightNode(), inserted));
            parent = balanceSubTree(parent);
        }
        return parent;
    }
    
    template <class Type>
    void AVLTree<Type> :: insert(Type item)
    {
        insertNode(this->getRoot(), item)
    }
    
    template <class Type>
    void AVLTree<Type> :: remove(Type item)
    {
        removeNode(this->getRoot(), item)
    }
    

#endif /* AVLTree_hpp */
