//************************************************************************** 
//
// Programming Excerise 5   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017  
//
//**************************************************************************

#include "UpperCaseString.h"

UpperCaseString::UpperCaseString()		// automatically calls the default constructor for the Base class (WCS_String)
{
}

UpperCaseString::UpperCaseString(const UpperCaseString & Str) : WCS_String(Str)
{
}

UpperCaseString::UpperCaseString(const WCS_String & Str) : WCS_String(Str)
{
	ToUpper();
}

UpperCaseString::UpperCaseString(const char Str[]) : WCS_String(Str)
{
	ToUpper();
}

UpperCaseString::~UpperCaseString()	// automatically calls the destructor for the Base class (WCS_String)
{
}

UpperCaseString & UpperCaseString::Concat(const UpperCaseString & Str)
{
	WCS_String::Concat(Str);
	return *this;
}

UpperCaseString & UpperCaseString::Concat(const WCS_String & Str)
{
	WCS_String::Concat(Str);
	ToUpper();
	return *this;
}

UpperCaseString & UpperCaseString::Copy(const UpperCaseString & Str)
{
	WCS_String::Copy(Str);
	return *this;
}

UpperCaseString & UpperCaseString::Copy(const WCS_String & Str)
{
	WCS_String::Copy(Str);
	ToUpper();
	return *this;
}

bool UpperCaseString::SetAt(char c, int i)
{
	return WCS_String::SetAt(toupper(c), i);
}

UpperCaseString & UpperCaseString::operator = (const UpperCaseString & Str)
{
	return Copy(Str);
}

UpperCaseString & UpperCaseString::operator = (const WCS_String & Str)
{
	return Copy(Str);
}

UpperCaseString operator & (const WCS_String & Str, const UpperCaseString & S)
{
	UpperCaseString		Temp(Str);
	return Temp.Concat(S);
}
