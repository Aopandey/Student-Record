#include "date.h"
#include <iostream>
#include <string>

Date::Date(){	// default constructor to set year month and day to ""
Date::year = "";
Date::month = "";
Date::day = "";
}

Date::Date(std::string year, std::string month, std::string day){	// date constructor to initialize year month and day
Date::year = year;
Date::month = month;
Date::day = day;
}

Date::~Date(){	// default destructor 
}

std::string Date::getYear(){	// gets year
return Date::year;
}
void Date::setYear(std::string yearvalue){	// sets year
Date::year = yearvalue;
}

std::string Date::getMonth(){	// gets month
return Date::month;
}
void Date::setMonth(std::string monthvalue){	// sets month
Date::year = monthvalue;
}

std::string Date::getDay(){	// gets day
return Date::day;
}
void Date::setDay(std::string dayvalue){	// sets day
Date::year = dayvalue;
}

std::ostream& operator << (std::ostream& outputStream, const Date& date)	// to stream out dates content
{
	outputStream << date.month << "/" << date.day << "/" << date.year;	// order in which it's supposed to stream

	return outputStream;
}

void Date::printDate()	// to print out date contents 
{
	std::cout << month << day << year;
}
