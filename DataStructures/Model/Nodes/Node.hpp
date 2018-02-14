//
//  Node.hpp
//  DataStructures
//
//  Created by Stout, Zachary on 2/6/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <iostream>

template <class Type>
class Node{
//This section is available to All the subclasses of Node
protected:
    Type data;
public:
    Node();
    Node(Type data);
    void setData(Type data);
    Type getData();
};

template <class Type>
Node<Type> :: Node()
{
    //Needed for default constructor comlilation
    //Since when we create a structure it does no have an item to store yet.
}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

//#Basic methods
template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

#endif /* Node_hpp */
