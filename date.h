#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <string>

class Date {
private:
	std::string year;	// variable year
	std::string month;	// variable name
	std::string day;	// variable day
public:
	Date();		// constructor
	Date(std::string, std::string, std::string);	// constructor to accept string for each variable
	~Date();	// destructor 
	std::string getYear();	// gets year
        void setYear(std::string);	// sets year
	std::string getMonth();	// gets month
	void setMonth(std::string);	// sets month
	std::string getDay();	// gets day
	void setDay(std::string);	// sets day 
	friend std::ostream& operator << (std::ostream& outputStream, const Date& date);	// outputs the dates
	void printDate();	// prints out the complete day (year month and day)
};

#endif

