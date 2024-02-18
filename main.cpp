#include <sstream>
#include <fstream>
#include "student.h"
#define totallines 50

int main(){
std::ifstream inputfile;	// ifstream that represents input file
std::ofstream shortreport;	// output stream that represents short report
std::ofstream fullreport;	// output stream that represents full report
std::string inputline;		// initializes inputline

inputfile.open("students.dat");	// to open the students.dat file
shortreport.open("shortreport.txt");	// to open .txt file
fullreport.open("fullreport.txt");	// to open .txt file

Student* studentarray = new Student[totallines];	// array and pointer to each student in all 50 lines

int arraycounter = 0;	// set the array counter to zero for for loop below
for (arraycounter = 0; arraycounter < totallines; arraycounter++){	// for loop to go through all 50 lines of data
getline(inputfile, inputline);	// here each line gets transfered to input line
studentarray[arraycounter].set(inputline);	// to create student object for each of the 50 lines
}

int shortreportcounter;	// counter for short report
for (shortreportcounter = 0; shortreportcounter < totallines; shortreportcounter++){	// for loop to go through short report
shortreport << studentarray[shortreportcounter].getlastname() << "," << studentarray[shortreportcounter].getfirstname() << std::endl;	// to general short report in specific order
}

int fullreportcounter;	// counter for full report 
for (fullreportcounter = 0; fullreportcounter < totallines; fullreportcounter++){	// for loop to go through full report
fullreport << studentarray[fullreportcounter] << std::endl;	// to full report in specific order
}

shortreport.close();	// closes the short report
fullreport.close();	// closes the full report
delete[] studentarray;	// deletes all student array object
return 0;	// returns 0 
}
