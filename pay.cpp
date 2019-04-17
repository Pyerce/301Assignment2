//
//  pay.cpp
//  301Assignment2
//
//  Created by Pierce Findlay on 3/5/19.
//  Copyright © 2019 Pierce Findlay. All rights reserved.
//
// Pierce Findlay
// Section 2
#include "person.h"
#include <iostream>
#include <fstream>


//Function Declarations
void readData(Person employees[],int &size);
void writeData(Person employees[],int size);

int main()
{
    int size = 0;
    Person employee[20];
    
    readData(employee,size);
    writeData(employee,size);
    return 0;
}

void readData(Person employees[], int &size)
{
    string fname;
    string lname;
    double workedHours,payRate;
    ifstream inFile;
    inFile.open("input.txt");
    if(!inFile.is_open())
    {
        cout<<"** File Not Found **\n";
        exit (EXIT_FAILURE);
    }
    else
    {
        
        while(inFile >> fname >> lname >> workedHours >> payRate)
        {
            Person p;
            p.setFirstName(fname);
            p.setLastName(lname);
            p.setHoursWorked(workedHours);
            p.setPayRate(payRate);
            employees[size]=p;
            size++;
        }
        inFile.close();
    }
    
}

void writeData(Person employees[], int size)
{
    ofstream outFile;
    outFile.open("output.txt", ios::out);
    if (!outFile)
        cout << "Error";
    for(int i = 0; i < size; i++)
    {
        outFile << employees[i].fullName() << " "<<employees[i].totalPay() << endl;
        cout << employees[i].fullName() << " "<<employees[i].totalPay() << endl;
    }
    outFile.close();
}
