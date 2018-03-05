//
//  RecursionTester.cpp
//  DataStructures
//
//  Created by Stout, Zachary on 3/5/18.
//  Copyright © 2018 Stout, Zachary. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if ( number == 0 || number == 1 )
    {
        return 1;
    }
    else
    {
        cout << "reached a recursive case with: " << number - 1 << " and " << number - 2 << endl;
        return fib (number -1) + fib (number - 2);
    }
    
}

string RecursionTester :: mystery(string word)
{
    if ( word.length() == 1)
    {
        return word;
    }
    else
    {
        return word + mystery(word.substr(0, word.length() -1));
    }
}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << fib(10) << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecursionString()
{
    cout << mystery("X") << endl;
    cout << mystery("car") << endl;
    cout << mystery("apple") << endl;
    
}
