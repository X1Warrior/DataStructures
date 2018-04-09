//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Stout, Zachary on 4/9/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "BinaryTreeTester.hpp"

#include "BinaryTreeTester.hpp"

void BinaryTreeTester :: doTreeStuff()
{
    numberTree.insert(17);
    numberTree.insert(1414);
    numberTree.insert(2);
    numberTree.insert(-195273);
    numberTree.insert(-12);
    numberTree.insert(14);
    numberTree.insert(93020);
    numberTree.insert(7777);
    numberTree.insert(-1235);
    numberTree.insert(10);
    
    cout << "In Order Traversal - Numbers" << endl;
    numberTree.inOrderTraversal();
    cout << endl;
    cout << "Pre Order Traversal - Numbers" << endl;
    numberTree.preOrderTraversal();
    cout << endl;
    cout << "Post Order Traversal - Numbers" << endl;
    numberTree.postOrderTraversal();
    cout << endl;
    
    wordTree.insert("Bob");
    wordTree.insert("Tom");
    wordTree.insert("Dave");
    wordTree.insert("Aaron");
    wordTree.insert("Sarah");
    wordTree.insert("Emily");
    wordTree.insert("Michael");
    wordTree.insert("Luke");
    wordTree.insert("William");
    
    cout << "In Order Traversal - Words" << endl;
    wordTree.inOrderTraversal();
    cout << endl;
    cout << "Pre Order Traversal - Words" << endl;
    wordTree.preOrderTraversal();
    cout << endl;
    cout << "Post Order Traversal - Words" << endl;
    wordTree.postOrderTraversal();
    cout << endl;
}
