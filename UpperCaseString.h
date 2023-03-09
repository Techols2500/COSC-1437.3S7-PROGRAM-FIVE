//************************************************************************** 
//
// Programming Excerise 5   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017 
//
//**************************************************************************  

#ifndef UPPER_CASE_STRING_H
#define UPPER_CASE_STRING_H

#include "WCS_String.h" 

class UpperCaseString : public WCS_String
{
public:
	UpperCaseString();
	UpperCaseString(const UpperCaseString &);
	UpperCaseString(const WCS_String &);
	UpperCaseString(const char[]);
	~UpperCaseString();
	UpperCaseString &	Concat(const UpperCaseString &);
	UpperCaseString &	Concat(const WCS_String &);
	UpperCaseString &	Copy(const UpperCaseString &);
	UpperCaseString &	Copy(const WCS_String &);
	bool				SetAt(char, int);
	istream &			Read(istream &);
	UpperCaseString &	operator =			(const UpperCaseString &);
	UpperCaseString &	operator =			(const WCS_String &);
private:
	UpperCaseString &	ToLower();
	char &				operator []			(int);
};

UpperCaseString operator & (const WCS_String &, const UpperCaseString &);

#endif


