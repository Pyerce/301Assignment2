//
//  person.h
//  301Assignment2
//
//  Created by Pierce Findlay on 3/5/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
// Pierce Findlay
// Section 2
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
private:
    string lastName;
    string firstName;
    float  payRate;
    float  hoursWorked;
public:
    Person();
    Person(string firstName, string lastName, float payRate, float hoursWorked);
    void setLastName(string lName);
    string getLastName();
    void setFirstName(string fName);
    string getFirstName();
    void setPayRate(float rate);
    float getPayRate();
    void setHoursWorked(float hours);
    float getHoursWorked();
    float totalPay();
    string fullName();
};
#endif

