#pragma once
#include"Applications.h"
#include "Employer.h"

//Bidirectional association between applications and employer
class Reviewal
{
private:
	bool reviewalStatus;
	Applications *app1;
	Employer *emp1;

public:
	Reviewal();
	Reviewal(bool revStatus);
	void approveApplications();
	~Reviewal();
};