//************************************************************************** 
//
// Programming Excerise 5   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017  
//
//**************************************************************************

#include <ctype.h>
#include "DigitString.h" 


DigitString::DigitString()		// automatically calls the default constructor for the Base class (WCS_String)
{
}

DigitString::DigitString(const DigitString & Str) : WCS_String(Str)
{
}

DigitString::DigitString(const WCS_String & Str) : WCS_String(Str)
{
	if (!(isdigit(Str)))
	{
		throw - 1;		//First exception: If the thing isn't a digit inside the String
	};
}

DigitString::~DigitString()	// automatically calls the destructor for the Base class (WCS_String)
{
}

DigitString & DigitString::Concat(const WCS_String & Str)
{
	if (!(isdigit(Str)))
	{
		throw - 2;
	}
	WCS_String::Concat(Str);
	return *this;
}


DigitString & DigitString::Copy(const DigitString & Str)
{
	if (!(isdigit(Str)))
	{
		throw - 3;
	}
	WCS_String::Copy(Str);
	return *this;
}

DigitString & DigitString::Copy(const WCS_String & Str)
{
	WCS_String::Copy(Str);
	return *this;
}


istream & DigitString::Read(istream & In)
{
	char			c;
	char *			pTemp;
	int Count = 0;
	int MaxSize;
	char * pChar;
	const int StringSize(50);

	MaxSize = StringSize;
	pChar = new char[MaxSize + 1];
	while (((c = In.get()) != '\n') && !In.eof())
	{
		pChar[Count++] = c;
		if (!(isdigit(c)))
		{
			throw - 4;
		}
		if (Count >= MaxSize)
		{
			pTemp = new char[(MaxSize += StringSize) + 1];
			memcpy(pTemp, pChar, Count);
			delete[] pChar;
			pChar = pTemp;
		}
		else;
	}
	pChar[Count] = '\0';
	return In;
}


DigitString & DigitString::operator = (const DigitString & Str)
{
	if (!(isdigit(Str)))
	{
		throw - 6;
	}
	WCS_String::Copy(Str);
	return *this;
}

DigitString & DigitString::operator = (const WCS_String & Str)
{
	WCS_String::Copy(Str);
	return *this;
}

DigitString operator & (const WCS_String & Str, const DigitString & S)
{
	DigitString Temp(Str);
	return Temp.Concat(S);
}

DigitString  DigitString::operator & (const WCS_String & Str)
{
	DigitString Temp(Str);
	Temp.Concat(Str);
	return Temp;
}

void DigitString:: operator &= (const WCS_String & Str)
{
	Concat(Str);
}

bool isdigit(const WCS_String & Str)
{
	int len = Str.Length();
	for (int i = 0; i < len; i++)
	{
		if (!(isdigit(Str[i])))
		{
			return false;
		}
	}
	return true;
}