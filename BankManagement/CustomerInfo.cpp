/*****************************************************************//**
 * \file   CustomerInfo.cpp
 * \brief  Performs actions required to get and set customer data.
 *
 * \author sumanth
 * \date   January 2023
 *********************************************************************/

#include "CustomerInfo.h"

 /**
  * @brief Implement constructor of Customer.
  *
  * @param none
  *
  * @return none
  */
Customer::Customer()
{
	FirstName = "";
	LastName = "";
	age = 0;
}

/**
 * @brief Implement destructor of Customer.
 *
 * @param none
 *
 * @return none
 */
Customer::~Customer()
{
	FirstName = "";
	LastName = "";
	age = 0;
}

/**
 * @brief To get the name of the customer.
 *
 * @param none
 *
 * @return Customer Name
 */
string Customer::getName()
{
	return (FirstName + " " + LastName);

}

/**
 * @brief To set the name of the customer.
 *
 * @param FirstName and Last Name
 *
 * @return none
 */
void Customer::setName(string FirstName, string LastName)
{
	this->FirstName = FirstName;
	this->LastName = LastName;
}

/**
 * @brief To get the age of the customer.
 *
 * @param none
 *
 * @return age
 */
int Customer::getAge()
{
	return age;
}

/**
 * @brief To set the age of the customer.
 *
 * @param Age
 *
 * @return none
 */
void Customer::setAge(int Age)
{
	try
	{
		if (Age >= 18)
			this->age = Age;
		else
			throw(Age);
	}
	catch (int Age)
	{
		cout << "Exception: Age is not above 18 years\n";
		cout << "Access denied - You must be at least 18 years old.\n";
		cout << "Age is: " << Age;
	}
}
