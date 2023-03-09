//************************************************************************** 
//
// Programming Excerise 5   
// CLASS: COSC 1437.3S7 
// AUTHOR: TYLER ECHOLS 
// DATE: Jul 2017 
//
//************************************************************************** 

#include <iostream>

using namespace std;

#include "UpperCaseString.h"
#include "DigitString.h"
#include "WCS_String.h"

void main()
{
	UpperCaseString		UC1;
	UpperCaseString		UC2(WCS_String("ABC"));
	UpperCaseString		UC3(WCS_String("jkl"));
	UpperCaseString		UC4(WCS_String("xyz"));
	UpperCaseString		UC5(UC3);
	UpperCaseString		UC6(UC2);
	UpperCaseString		UC7;
	UpperCaseString		UC8;

	//__________________ UpperCase________________________________
	cout << "__________________________________________________________" << endl;

	cout << "Testing Uppercase String " << endl;

	cout << "Default's:" << UC1 << "," << UC7 << "," << UC8 << endl;
	cout << "Copie's: " << UC5 << "," << UC6 << endl;
	cout << "Overloadeder's: " << UC2 << "," << UC3 << "," << UC4 << endl;

	cout << "End testing For UpperCase String " << endl;

	//_____________________Concat_________________________________
	cout << "__________________________________________________________" << endl;

	cout << "Testing Concat " << endl;

	UC2.Concat(UC3);
	UC5.Concat(WCS_String("xyz"));

	cout << "UC2 is now" << UC2 << endl;
	cout << "UC5 is now" << UC5 << endl;

	cout << "End for testing Concat " << endl;

	//_________________ Copy ____________________________
	cout << "__________________________________________________________" << endl;

	cout << "Testing Copy " << endl;

	UC5.Copy(UC3);
	UC2.Copy(WCS_String("ABC"));

	cout << "UC5 is now : " << UC5 << endl;
	cout << "UC2 is now: " << UC2 << endl;

	cout << "End for testing Copy " << endl;

	//___________________Read______________________________
	cout << "__________________________________________________________" << endl;

	cout << "Testing Read " << endl;

	cout << "Please enter uppercase letters: ";
	cin >> UC1;
	cout << "you entered: " << UC1 << endl;
	cout << "Please enter lowercase letters: ";
	cin >> UC7;
	cout << "you entered, all in uppercase: " << UC7 << endl;
	cout << "Please enter mixed letters: ";
	cin >> UC8;
	cout << "you entered, all in uppercase: " << UC8 << endl;

	cout << "End for testing Copy " << endl;

	//________________Set At__________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Tesing Set At " << endl;

	UC2.SetAt('c', 1);
	cout << "UC2 is now : " << UC2 << endl;
	UC5.SetAt('j', 12);
	cout << "UC5 is now  : " << UC5 << endl;

	UC2.SetAt('B', 1);

	cout << "End for testing Set At " << endl;

	//________________ Operators_______________________________
	cout << "__________________________________________________________" << endl;

	cout << "Testing Operators " << endl;

	UC1 = UC2;
	UC7 = WCS_String("mno");

	cout << "OPERATORS" << endl;
	cout << "= operator" << endl;
	cout << " UC1 is now: " << UC1 << endl;
	cout << " UC7 is now: " << UC7 << endl;

	UC1 = UC2 & UC3;
	UC7 = UC4 & WCS_String("MNO");
	UC8 = WCS_String("ABCDEFGH") & UC4;

	cout << "& operator" << endl;
	cout << " UC1 is now: " << UC1 << endl;
	cout << " UC7 is now: " << UC7 << endl;
	cout << " UC8 is now : " << UC8 << endl;

	UC1 &= UC4;
	UC8 &= WCS_String("PQRST");

	cout << "&= operator" << endl;
	cout << " UC1 is now: " << UC1 << endl;
	cout << " UC8 is now: " << UC8 << endl;

	cout << "End for testing Operator " << endl;

	//__________________________Digit String___________________________________
	DigitString DS1;
	DigitString DS2(WCS_String("1"));
	DigitString DS3(WCS_String("234"));
	DigitString DS4(WCS_String("567"));
	DigitString DS5(DS3);
	DigitString DS6(DS2);
	DigitString DS7;
	DigitString DS8;

	cout << "Default: " << DS1 << ", " << DS7 << ", " << DS8 << endl;
	cout << "Overloader's: " << DS2 << ", " << DS3 << ", " << DS4 << endl;
	cout << "Copies: " << DS5 << ", " << DS6 << endl;

	//_____________________Concat_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Concat " << endl;

	DS2.Concat(DS3);
	DS5.Concat(WCS_String("432"));

	cout << "DS2 is now: " << DS2 << endl;
	cout << "DS5 is now: " << DS5 << endl;

	cout << "End for testing Concat " << endl;

	//_____________________Copy_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Copy " << endl;

	DS5.Copy(DS3);
	DS2.Copy(WCS_String("1"));

	cout << "DS5 is now :" << DS5 << endl;
	cout << "DS2 is now :" << DS2 << endl;

	cout << "End for testing Copy " << endl;

	//_____________________Read_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Read " << endl;

	try
	{
		cout << "Please enter digit(s): ";
		cin >> DS1;
		cout << "you entered: " << DS1 << endl;
	}
	catch (int e)
	{
		if (e == -4)
			cout << "You entered a non-digit character" << endl;
		else
			cout << "Read method: internal error" << endl;
	}

	cout << "End for testing Read " << endl;

	//_____________________Set At_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Set At " << endl;

	DS4.SetAt('0', 1);
	cout << "Should be 608: " << DS4 << endl;
	DS4.SetAt('0', 50);
	cout << "Should be 608: " << DS4 << endl;

	cout << "End for testing Set At " << endl;

	//_____________________Operator_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Operator " << endl;

	cout << "= operator" << endl;
	DS1 = DS2;
	cout << "DS1 is now : " << DS1 << endl;
	DS4 = WCS_String("6789");
	cout << "DS4 is now: " << DS4 << endl;

	cout << "\n& operator" << endl;
	DS1 = DS2 & DS3;
	cout << "DS1 is now: " << DS1 << endl;
	DS7 = DS4 & WCS_String("0");
	cout << "DS7 is now: " << DS7 << endl;
	DS8 = WCS_String("12345") & DS7;
	cout << "DS8 is now: " << DS8 << endl;

	cout << "\n&= operator" << endl;
	DS3 &= DS7;
	cout << " DS3 is now: " << DS3 << endl;
	DS8 &= WCS_String("123");
	cout << "DS8 is now: " << DS8 << endl;

	cout << "End for testing Operator " << endl;

	//_____________________Overload Constructor_________________________________ 
	cout << "__________________________________________________________" << endl;

	cout << "Testing Overloader " << endl;

	try
	{
		DigitString d9(WCS_String("abc")); //overloaded that will throw an exception -1
	}
	catch (int e)
	{
		if (e == -1)
			cout << "Non-digit character in overloaded constructor" << endl;
		else
			cout << "Overloaded constructor: internal error" << endl;
	}

	cout << "\nConcat" << endl;
	try
	{
		DS6.Concat(WCS_String("two")); //will throw an exception -2
	}
	catch (int e)
	{
		if (e == -2)
			cout << "Non-digit character in concat method" << endl;
		else
			cout << "Concat method: internal error" << endl;
	}

	cout << "\nCopy" << endl;
	try
	{
		DS6.Copy(WCS_String("abcd")); //will throw exception -3
	}
	catch (int e)
	{
		if (e == -3)
			cout << "Non-digit character in copy method" << endl;
		else
			cout << "Copy method: internal error" << endl;
	}

	cout << "\nRead" << endl;
	try
	{
		cout << "Please enter non-digits: "; //should throw -4 exception
		cin >> DS7; //should throw -4 exception
	}
	catch (int e)
	{
		if (e == -4)
			cout << "Non-digit character in read method" << endl;
		else
			cout << "Read method: internal error" << endl;
	}

	cout << "\nSetAt" << endl;
	try
	{
		DS3.SetAt('f', 2); //will throw exception -5
	}
	catch (int e)
	{
		if (e == -5)
			cout << "Non-digit character in SetAt method" << endl;
		else
			cout << "SetAt method: internal error" << endl;
	}

	cout << "\n= operator" << endl;
	try
	{
		DS8 = WCS_String("ten"); //should throw a -6 exception
	}
	catch (int e)
	{
		if (e == -6)
			cout << "Non-digit character in = operator" << endl;
		else
			cout << "= operator: internal error" << endl;
	}

	cout << "\n& operator" << endl;
	try
	{
		DS2 = DS7 & WCS_String("one"); //should throw a -2 exception
	}
	catch (int e)
	{
		if (e == -2)
			cout << "Non-digit character in & operator" << endl;
		else
			cout << "& operator: internal error" << endl;
	}
	try
	{
		DS3 = WCS_String("zero") & DS1; //should throw a -1 or -2 exception
	}
	catch (int e)
	{
		if (e == -1)
			cout << "Non-digit character in & operator" << endl;
		else
			cout << "& operator: internal error. Should be -2" << endl;
	}

	cout << "\n&= operator" << endl;
	try
	{
		DS1 &= WCS_String("six"); //should throw a -2 exception 
	}
	catch (int e)
	{
		if (e == -2)
			cout << "Non-digit character in &= operator" << endl;
		else
			cout << "&= operator: internal error" << endl;
	}

	cout << "End for testing Overloader " << endl;

}

