#include <iostream>
#include "address.h"

Address::Address(){	// default constructor to initialize all the elemetns to ""
Address::addressline1 = "";
Address::addressline2 = "";
Address::state = "";
Address::city = "";
Address::zipcode = "";
}

Address::Address(std::string addressline1, std::string addressline2, std::string state, std::string city, std::string zipcode){	//address constructor to create the object with non default value 
Address::addressline1 = addressline1;
Address::addressline2 = addressline2;
Address::state = state;
Address::city = city;
Address::zipcode = zipcode;
}

Address::~Address(){	// dafault destructor 
}

std::string Address::getaddressline1(){	// gets addrress line 1
return Address::addressline1;
}
void Address::setaddressline1(std::string addressline1){	// sets address line 1
Address::addressline1 = addressline1;
}

std::string Address::getaddressline2(){	// gets address line 2
return Address::addressline2;
}
void Address::setaddressline2(std::string addressline2){	// sets address line 2
Address::addressline2 = addressline2;
}

std::string Address::getstate(){	// gets state
return Address::state;
}
void Address::setstate(std::string state){	// sets state 
Address::state = state;
}

std::string Address::getcity(){	// gets city
return Address::city;
}
void Address::setcity(std::string city){	// sets city
Address::city = city;
}

std::string Address::getzipcode(){	// gets zip code
return Address::zipcode;
}
void Address::setzipcode(std::string zipcode){	// sets zip code 
Address::zipcode = zipcode;
}

std::ostream& operator << (std::ostream& outputstream, const Address& address){	// output stream to output all the student information 
outputstream << address.addressline1 << "," << address.addressline2 << "," << address.state << "," << address.city << "," << address.zipcode;	// format in which its supposed to output
return outputstream;
}

void Address::printaddress(){	// prints out the student information 
std::cout << addressline1 << addressline2 << state << city << zipcode;
}
