/**
 * Title       : Bank Management System
 * Description : This is Bank Management System project
 */

/*****************************************************************//**
 * \file   BankManagement.cpp
 * \brief  This file contains the 'main' function. Program execution begins and ends there.
 * 
 * \author Sumanth
 * \date   January 2023
 *********************************************************************/

#include "CustomerInfo.h"

/**
 * @brief. This is main function, start of the program
 * 
 * @param none
 * 
 * @return SUCCESS 
 */
int main(int argc, char** argv)
{
    cout << "Welcome to Bank management system" << endl;

    Customer Customer1;
    string firstName, secondName;
    int Age;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter First Name: ";
    cin >> secondName;
    cout << "Enter Age: ";
    cin >> Age;
    Customer1.setName(firstName, secondName);
    Customer1.setAge(Age);

    cout << "Name of the customer: " << Customer1.getName() << endl;
    cout << "Age of the customer: " << Customer1.getAge() << endl;

    return 0;
}