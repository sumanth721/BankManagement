#ifndef _BMS_H_
#define _BMS_H_

class Customer
{
	private:
		std::string FirstName, LastName;
		int Age;

	public:
		Customer(std::string p_first, std::string p_last, int p_age);
		~Customer(){
		};
		void setName(std::string p_first, std::string p_last);
		void setAge(int p_age);
		std::string getName();
};

Customer::Customer(std::string p_first, std::string p_last, int p_age)
{
	setName(p_first, p_last);
	setAge(p_age);
}

void Customer::setName(std::string p_first, std::string p_last)
{
	FirstName = p_first;
	LastName = p_last;
}

void Customer::setAge(int p_age)
{
	if ((p_age >= 18) && (p_age <= 65)) {
      Age = p_age;
    }
    else {
      std::cout << "Drivers age is not in permissible limit" << std::endl;
      return;
    }
	
}

std::string Customer::getName()
{
	return (FirstName + " " + LastName);
}

class BankManagement
{
    public:
        BankManagement(){};
        ~BankManagement(){};

        //function declarations
        void openAccount();
        void openFD();
};


#endif //_BMS_H_
