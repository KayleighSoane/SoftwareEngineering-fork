// 17-SimpleTemplateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "Point.h"
#include "Point2.h"

using namespace std;

int main() {
    cout << std::fixed;
    
    //First - a pair of integers
    Point2<int> p1(4, 5);
    p1.display();
    cout << p1.max() << endl;

    //Now, let's consider a pair of floats
    Point2<float> p2(4.0f, 4.5f);
    p2.display();
    cout << p2.max() << endl;

}
