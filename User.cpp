#include "User.h"
#include<iostream>

User::User() {
	//Default Constructor
	username = "";
	email = "";
	password = "";

}

 User::User(string uName, string mail, string pWord) {
	//Overloaded Constructor
	username = uName;
	email = mail;
	password = pWord;
}

 void User::login() {

 }

void User::registerUser(){

}

void User::viewVacancyDetails() {

}
void User::manageProfile() {

}
void User::searchVacancy() {

}

User::~User() {
	//Default Destructor
	cout << "User destroyed" << endl;
}