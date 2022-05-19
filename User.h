#pragma once
#include <iostream>
#include<string>
using namespace std;

//User class is parent class

class User {
protected:
	string username;
	string email;
	string password;

public:
	User();
	User(string uName, string mail, string pWord);
	void registerUser();
	void login();
	void viewVacancyDetails();
	void manageProfile();
	void searchVacancy();
	~User();
};