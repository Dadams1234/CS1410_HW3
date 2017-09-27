// file: Real_SaltLake_HW3_task2.cpp
// Created by Daryl Adams on 9/26/17 for CS1410. Real SaltLake
// Copyright (c) 2017 WSU

//


#include <iostream>

using namespace std;

class serial{ 
	private:
		static int count;
		int serialnumber;
	public:
		serial(){serialnumber=count++;}
		int getCount(){    // display information
        	return serialnumber;
    	}
};

// Constants, Structs, Classes
int serial::count=0;

// Prototypes
void ShowSerial(serial s);


// Main Program Program

int main() {

	serial alpha, beta, gamma; //make some objects
	ShowSerial(alpha);
	ShowSerial(beta);
	ShowSerial(gamma);
	ShowSerial(alpha);
	ShowSerial(alpha);
	ShowSerial(alpha);
	ShowSerial(alpha);
	ShowSerial(beta);
	return 0;

}
void ShowSerial(serial s) {
	cout << "I am object number " << s.getCount() << endl;
}

// Function Definitions
