//
//  person.cpp
//  301Assignment2
//
//  Created by Pierce Findlay on 3/5/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//
// Pierce Findlay
// Section 2
#include "person.h"

Person::Person(string firstName_, string lastName_, float payRate_, float hoursWorked_)
{
    firstName_ = firstName;
    lastName_ = lastName;
    payRate_ = payRate;
    hoursWorked_ = hoursWorked;
}

Person::Person()
{
    firstName = "";
    lastName = "";
    payRate = 0;
    hoursWorked = 0;
}


void Person::setLastName(string lName)
{
    lastName = lName;
}

string Person::getLastName()
{
    return lastName;
}

void Person::setFirstName(string fName)
{
    firstName = fName;
}

string Person::getFirstName()
{
    return firstName;
}
void Person::setPayRate(float rate)
{
    payRate = rate;
}

float Person::getPayRate()
{
    return payRate;
}

void Person::setHoursWorked(float hours)
{
    hoursWorked = hours;
}

float Person::getHoursWorked()
{
    return hoursWorked;
}

float Person::totalPay()
{
    float total;
    total = payRate * hoursWorked;
    return total;
}

string Person::fullName()
{
    string fName;
    fName = firstName + " " + lastName;
    return fName;
}
/*
 Ex:
 string Person::getFirstName() {
 return firstName;
 }
 
 You will need to make a separate file called ​person.cpp​. The file person.cpp contains proper definitions for all function declarations in the header file. The first line of the file is an include statement:
 #include "person.h"

 */

