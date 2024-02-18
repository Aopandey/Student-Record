#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include "address.h"
#include "date.h"
#include <string>

class Student{
private: // has private attributes 
	Date* birthday;		// object birthday
	Date* graduationday;	// object graduation day 

	std::string lastName;	// variable last name
	std::string firstName;	// variable first name
	std::string gpa;	// variable gpa		
	std::string totalcredithours;	// object total credit hour
	
	Address* studentAddress;	// object address 
public: // has public attributes
	Student(std::string);	// constructor to accept input from .datfile
	void set(std::string);  // sets all the input from .datfile	
	Student();	// constructor
	~Student();	// destructor 
	std::string getfirstname();	// gets first name
	void setfirstname(std::string);	// sets first name
	std::string getlastname();	// gets last name
	void setlastname(std::string);	// sets last name
	std::string getGPA();		// gets gpa
        void setgpa(std::string);	// sets gpa
	Date getbirthday();		// gets birthday 
        void setbirthday(Date*);	// sets birthday
	Address getstudentaddress();	// gets address
	void setstudentaddress(Address*);	// sets address
	Date getgraduationday();	// gets graduation date
	void setgraduationday(Date*);	// sets graduation date
	std::string getcredithours();	// gets credit hours
	void setcredithours(std::string);	// sets credit hour
	friend std::ostream& operator << (std::ostream& outputStream, const Student& students);	// outputs all the objects 
	void printAll(); // prints all the object to stdout
	void printNames();	// prints out all the student names
};

#endif

