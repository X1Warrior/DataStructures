//
//  BinaryTreeTester.cpp
//  DataStructures
//
//  Created by Stout, Zachary on 4/9/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

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
    
    cout << "Size of tree - Numbers" << endl;
    cout << numberTree.getSize() << endl;
    cout << endl;
    cout << "Height of tree - Numbers" << endl;
    cout << numberTree.getHeight() << endl;
    cout << endl;
    cout << "Is balanced - Numbers" << endl;
    cout << numberTree.isBalanced() << endl;
    cout << endl;
    cout << "Is complete - Numbers" << endl;
    cout << numberTree.isComplete() << endl;
    cout << endl;
    
    
    //    cout << "In Order Traversal - Numbers" << endl;
    //    numberTree.inOrderTraversal();
    //    cout << endl;
    //    cout << "Pre Order Traversal - Numbers" << endl;
    //    numberTree.preOrderTraversal();
    //    cout << endl;
    //    cout << "Post Order Traversal - Numbers" << endl;
    //    numberTree.postOrderTraversal();
    //    cout << endl;
    
    wordTree.insert("Bob");
    wordTree.insert("Tom");
    wordTree.insert("Dave");
    wordTree.insert("Aaron");
    wordTree.insert("Sarah");
    wordTree.insert("Emily");
    wordTree.insert("Michael");
    wordTree.insert("Luke");
    wordTree.insert("William");
    
    cout << "Size of tree - Words" << endl;
    cout << wordTree.getSize() << endl;
    cout << endl;
    cout << "Height of tree - Words" << endl;
    cout << wordTree.getHeight() << endl;
    cout << endl;
    cout << "Is balanced - Words" << endl;
    cout << wordTree.isBalanced() << endl;
    cout << endl;
    cout << "Is complete - Words" << endl;
    cout << wordTree.isComplete() << endl;
    cout << endl;
    
    //    cout << "In Order Traversal - Words" << endl;
    //    wordTree.inOrderTraversal();
    //    cout << endl;
    //    cout << "Pre Order Traversal - Words" << endl;
    //    wordTree.preOrderTraversal();
    //    cout << endl;
    //    cout << "Post Order Traversal - Words" << endl;
    //    wordTree.postOrderTraversal();
    //    cout << endl;
}
