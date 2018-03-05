//
//  Controller.cpp
//  DataStructures
//
//  Created by Stout, Zachary on 1/31/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "Controller.hpp"

using namespace std;

void Controller :: start()
{
    RecursionTester test;
    test.testRecursionNumbers();
    test.testRecursionString();
}

void Controller :: findMaxAndMin()
{
    Timer searchTimer;
    searchTimer.startTimer();
    vector<CrimeData> myData = FileController :: readCrimeDataToVector("/Users/zsto7638/Documents/2420 Data Stuff/DataStructures/DataStructures/Data/crime.csv");
    
    int minIndex = 0;
    int maxIndex = 0;
    
    for (int index = 1; index < myData.size(); index++)
    {
       if (myData[minIndex] > myData [index])
       {
           minIndex = index;
       }
       else if (myData [maxIndex] < myData[index])
        {
            maxIndex = index;
        }
        
    }
    
    searchTimer.stopTimer();
    cout << "The smallest Crime stat is at " << minIndex << " and it is: " << myData[minIndex] << endl;
    cout << "The largest Crime stat is at " << maxIndex << " and it is: " << myData[maxIndex] << endl;
    searchTimer.displayInformation();
}
void Controller :: testArray()
{
    Array<int>zachArray(45);
    
    zachArray[0] = 123;
    zachArray.setAtIndex(0,321);
    
    cout<< zachArray.getSize()<< endl;
}
