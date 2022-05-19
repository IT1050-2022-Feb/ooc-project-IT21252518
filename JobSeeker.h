#pragma once
#include "User.h"
#include <iostream>
#include "Vacancy.h"
#include <string>
#include "Employer.h"
#include "Applications.h"
using namespace std;

//Inheritance relationship between Jobseeker and User
//DEpendancy relationship between Job seeker and employer
//unidirectional association between job seekerand applications
//unidirectional association between job seeker and applications
class JobSeeker : public User {// Job seeker class
private:
	string seekerID;
	int contactNo;
	Applications* app1;

public:
	JobSeeker();
	JobSeeker(string sID, int cNo, string mail, string uName, string pWord);
	void applyforVacancy(Vacancy* vac1);	//DEpendancy relationship between Job seeker and Vacancy
	void submitApplication();
	void manageApplications();
	void viewRecruiterDetails(Employer* emp1);	//DEpendancy relationship between Job seeker and employer
	~JobSeeker();
};
