// file: Real_SaltLake_HW3_task2.cpp
// Created by Daryl Adams on 9/26/17 for CS1410. Real SaltLake
// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

class serial()
{
    public:
        static int count;
    private:
        serial():{count++;}
    
};

// Constants, Structs, Classes
int serial::count=0;


// Prototypes



// Main Program Program

int main()
{
    
    serial alpha, beta, gamma; //make some objects
    ShowSerial(alpha);
    ShowSerial(beta);
    ShowSerial(gamma);

    return 0;
    
}

// Function Definitions
