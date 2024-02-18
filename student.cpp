#include <string>
#include <sstream>
#include "student.h"
#include "address.h"
#include "date.h"

Student::Student(std::string inputLine){	// student constructor 
std::stringstream stringStream(inputLine);	// setting up the string stream
stringStream.clear();	// to clear string stream
stringStream.str("");	// also cleans it 

Student::studentAddress = new Address();	// creates new address object
Student::birthday = new Date();	// creates new date object
Student::graduationday = new Date();	// cretaes new date object
std::string tempaddressline1, tempAddressline2, tempstate, tempcity, tempzipcode;	//initializes all the string that we will be using in the program
std::string tempyear, tempmonth, tempdob;
std::string tempgradyear, tempgradmonth, tempgradday;
std::string tempGPA, tempcredits;

getline(stringStream, Student::lastName, ',');	// gets last name
getline(stringStream, Student::firstName, ',');	// gets first name
getline(stringStream, tempaddressline1, ',');	// gets address line 1 
getline(stringStream, tempAddressline2, ',');	// gets address line 2
getline(stringStream, tempstate, ',');	// gets state
getline(stringStream, tempcity, ',');	// gets city
getline(stringStream, tempzipcode, ',');	// gets zip code
getline(stringStream, tempyear, ',');	// gets year
getline(stringStream, tempmonth, '/');	// gets month
getline(stringStream, tempdob, '/');	// gets day
getline(stringStream, tempgradyear, ',');	// gets graduation year
getline(stringStream, tempgradmonth, '/');	// gets graduation month
getline(stringStream, tempgradday, '/');	// gets graduation day
getline(stringStream, tempGPA, ',');	// gets month
getline(stringStream, tempcredits);	// gets credit points
	
Student::studentAddress->setaddressline1(tempaddressline1);	// sets address line 1
Student::studentAddress->setaddressline2(tempAddressline2);	// sets address line 2
Student::studentAddress->setstate(tempstate);	// sets state 
Student::studentAddress->setcity(tempcity);	// sets city
Student::studentAddress->setzipcode(tempzipcode);	// sets zip code
Student::birthday->setYear(tempyear);	// sets year
Student::birthday->setMonth(tempmonth);	// sets month 
Student::birthday->setDay(tempdob);	// sets day
Student::graduationday->setYear(tempgradyear);  // sets graduation year
Student::graduationday->setMonth(tempgradmonth);        // sets graduation month
Student::graduationday->setDay(tempgradday);    // sets graduation day
Student::setgpa(tempGPA);	// sets gpa
Student::setcredithours(tempcredits);	// sets credit points
}

Student::Student(){	// default constructor will nil values 
Student::firstName = "";
Student::lastName = "";
Student::birthday = new Date();
Student::graduationday = new Date();
Student::studentAddress = new Address();
Student::gpa = "";
Student::totalcredithours= "";
}

Student::~Student(){	// destructor for students 
delete studentAddress;
delete birthday;
delete graduationday;
}


void Student::setfirstname(std::string firstName){	// sets first name
Student::firstName = firstName;
}
std::string Student::getfirstname(){	// gets first name
return Student::firstName;
}

void Student::setlastname(std::string lastName){	// sets last name
Student::lastName = lastName;
}
std::string Student::getlastname(){	// gets last name 
return Student::lastName;
}

Address Student::getstudentaddress(){	// gets address
return *Student::studentAddress;
}
void Student::setstudentaddress(Address* address){	// sets address
Student::studentAddress = address;
}

Date Student::getbirthday(){	// gets birthday
return *Student::birthday;
}
void Student::setbirthday(Date* birthday){	// sets birthday 
Student::birthday = birthday;
}

Date Student::getgraduationday(){	// gets graduation day
return *Student::graduationday;
}
void Student::setgraduationday(Date* graduationday){	// sets graduation day 
Student::graduationday = graduationday;
}

std::string Student::getGPA(){	// gets gpa
return Student::gpa;
}
void Student::setgpa(std::string GPA){	// sets gpa 
Student::gpa = GPA;
}

std::string Student::getcredithours(){	// gets credit hours 
return Student::totalcredithours;
}
void Student::setcredithours(std::string creditHours){	// sets credit hours 
Student::totalcredithours = creditHours;
}

std::ostream& operator << (std::ostream& outputStream, const Student& student){	// to stream the object's data file 
outputStream << student.lastName << "," << student.firstName << "," << *student.studentAddress << "," << *student.birthday << "," << *student.graduationday << "," << student.gpa << "," << student.totalcredithours;
return outputStream;
}

void Student::set(std::string inputLine){	// setter for all the objects, it takes strings 
std::stringstream stringStream(inputLine);

stringStream.clear();

std::string tempaddressline1, tempAddressline2, tempstate, tempcity, tempzipcode;
std::string tempyear, tempmonth, tempdob;
std::string tempgradday, tempgradmonth, tempgradyear;
std::string tempGPA, tempcredits;

getline(stringStream, Student::lastName, ',');
getline(stringStream, Student::firstName, ',');
getline(stringStream, tempaddressline1, ',');
getline(stringStream, tempAddressline2, ',');
getline(stringStream, tempstate, ',');
getline(stringStream, tempcity, ',');
getline(stringStream, tempzipcode, ',');
getline(stringStream, tempyear, ',');
getline(stringStream, tempmonth, '/');
getline(stringStream, tempdob, '/');
getline(stringStream, tempgradyear, ',');
getline(stringStream, tempgradmonth, '/');
getline(stringStream, tempgradday, '/');
getline(stringStream, tempGPA, ',');
getline(stringStream, tempcredits);

Student::studentAddress->setaddressline1(tempaddressline1);
Student::studentAddress->setaddressline2(tempAddressline2);
Student::studentAddress->setstate(tempstate);
Student::studentAddress->setcity(tempcity);
Student::studentAddress->setzipcode(tempzipcode);
Student::graduationday->setYear(tempgradyear);
Student::graduationday->setMonth(tempgradmonth);
Student::graduationday->setDay(tempgradday);
Student::birthday->setYear(tempyear);
Student::birthday->setMonth(tempmonth);
Student::birthday->setDay(tempdob);
Student::setgpa(tempGPA);
Student::setcredithours(tempcredits);
}

void Student::printAll(){	// prints all the data 
Student::printNames();
studentAddress->printaddress();
birthday->printDate();
graduationday->printDate();
std::cout << gpa << totalcredithours;
}

void Student::printNames(){	// prints just the first and last name 
std::cout << firstName << lastName;
}

