#pragma once
#ifndef _CUSTOMERINFO_H_
#define _CUSTOMERINFO_H_
#include <iostream>
#include <string>
using namespace std;

class Customer
{
public:
	Customer();
	~Customer();
	string getName();
	void setName(string FirstName, string LastName);
	int getAge();
	void setAge(int Age);

private:
	string FirstName, LastName;
	int age;
};

#endif // !_CUSTOMERINFO_H_
