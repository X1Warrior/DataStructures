//
//  Controller.hpp
//  DataStructures
//
//  Created by Stout, Zachary on 1/31/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include <vector>
#include "Tools/Timer.hpp"
#include "FileController.hpp"
#include "../Model/Structures/Array.hpp"
#include "../Testers/ArrayTester.hpp"

class Controller
{
private:
    void findMaxAndMin();
private:
    void testArray();
public:
    void start();
};

#endif /* Controller_hpp */
