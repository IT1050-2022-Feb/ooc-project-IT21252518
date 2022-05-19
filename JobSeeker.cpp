#include "JobSeeker.h"
#include <iostream>
#include <string>
using namespace std;

JobSeeker::JobSeeker() {
    //Default Constructor
    seekerID = "";
    contactNo = 000;
}

JobSeeker::JobSeeker(string sID, int cNo, string mail, string uName, string pWord):User(uName, mail, pWord) {
    seekerID = sID;
    contactNo = cNo;
    email = mail;
    username = uName;
    password = pWord;
}

void JobSeeker::applyforVacancy(Vacancy* vac1) {	//Dependancy relationship between Job seeker and Vacancy

}

void JobSeeker::viewRecruiterDetails(Employer* emp1) {//DEpendancy relationship between Job seeker and employer

}


void JobSeeker::submitApplication() {

}

void JobSeeker::manageApplications() {

}


JobSeeker::~JobSeeker() {
    //Default destructor
    cout << "Jobseeker destroyed" << endl;
}