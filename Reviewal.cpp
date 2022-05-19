#include "Reviewal.h"
#include <iostream>

using namespace std;

Reviewal::Reviewal() //Default constructor
{
	reviewalStatus = false;
}

Reviewal::Reviewal(bool revStatus) //Overloaded constructor 
{
	reviewalStatus = revStatus;
}

void Reviewal::approveApplications()
{

}

Reviewal::~Reviewal() // default destructor
{
	cout << "Reviewal destroyed" << endl;
}