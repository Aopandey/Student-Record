#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>

class Address{
private:
	std::string addressline1;	// variable address line 1
	std::string addressline2;	// variable address line 2
	std::string state;	// variable state
	std::string city;	// variable city
	std::string zipcode;	// variable zip code
public:
	Address();	// constructor 
	~Address();	// destructor
	Address(std::string, std::string, std::string, std::string, std::string);	// constructor to accept string instead of other types
	std::string getaddressline1();	// gets address line 1
	void setaddressline1(std::string);	// sets address line 1
	std::string getaddressline2();	// gets address line 2
	void setaddressline2(std::string);	//sets address line 2
	std::string getstate();	// gets state
        void setstate(std::string);	// sets state
	std::string getcity();	// gets city name
	void setcity(std::string);	// sets city name
	std::string getzipcode();	// gets zip code
	void setzipcode(std::string);	// sets zip code
	friend std::ostream& operator << (std::ostream& outputStream, const Address& address);	// outputs the info from address 1 and 2
	void printaddress();	// prints address 
};

#endif

