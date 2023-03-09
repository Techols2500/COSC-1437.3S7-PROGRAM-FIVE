//************************************************************************** 
//
// Programming Excerise 5   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017  
//
//**************************************************************************


#ifndef DIGIT_STRING_H
#define DIGIT_STRING_H 

#include "WCS_String.h"

class DigitString : public WCS_String
{
public:
	DigitString();
	DigitString(const DigitString &);
	DigitString(const WCS_String &);
	~DigitString();
	DigitString &	Concat(const DigitString &);
	DigitString &	Concat(const WCS_String &);
	DigitString &	Copy(const DigitString &);
	DigitString &	Copy(const WCS_String &);
	istream &		Read(istream &);
	bool			SetAt(char, int);
	DigitString &	operator =			(const DigitString &);
	DigitString &	operator =			(const WCS_String &);
	DigitString		operator &				(const DigitString &);
	DigitString		operator &				(const WCS_String &);
	void	operator &=					(const DigitString &);
	void	operator &=					(const WCS_String &);
private:
	DigitString &		Tolower();
	char &				operator []			(int);
};

DigitString operator & (const WCS_String &, const DigitString &);

bool isdigit(const WCS_String &);

inline bool DigitString::SetAt(char X, int Y)
{
	if (!(isdigit(X)))
	{
		throw - 5;
	};
	return (WCS_String::SetAt(X, Y));
}

inline DigitString & DigitString::Concat(const DigitString & Str)
{
	WCS_String::Concat(Str);
	return (*this);
}

inline DigitString DigitString::operator & (const DigitString & Str)
{
	DigitString Temp(*this);
	return Temp.Concat(Str);
}

inline void DigitString::operator &= (const DigitString & Str)
{
	Concat(Str);
}

inline istream & operator >> (istream & in, DigitString & Str)
{
	return Str.Read(in);
}

#endif

