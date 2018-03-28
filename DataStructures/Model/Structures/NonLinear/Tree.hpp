//
//  Tree.hpp
//  DataStructures
//
//  Created by Stout, Zachary on 3/27/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <iostream>
#include <assert.h>
#include "../../Nodes/BinaryTreeNode.hpp"

template <class Type>
class Tree
{
protected:
    BinaryTreeNode<Type> * root;
public:
    //Informational Methods
    virtual int getSize() = 0;
    virtual int getHeight() = 0;
    virtual bool isComplete() = 0;
    virtual bool isBalanced() = 0;
    //Data Methods
    virtual void insert(Type) = 0;
    virtual bool contains(Type) = 0;
    virtual void remove(Type) = 0;
    //Traversals
    virtual void inOrderTraversal() = 0;
    virtual void preOrderTraversal() = 0;
    virtual void postOrderTraversal() = 0;
};
#endif /* Tree_hpp */
