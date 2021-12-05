//Laura Luke
//12-05-2021
//CIS 1202 501
//15a Exceptions

#include <iostream>
#include <string>

using namespace std;

class invalidCharacterException
{

};

class invalidRangeException
{

};

class caseConversionException
{

};

char character(char start, int offset)
{
	int startAsciiValue = int(start);
	int target = startAsciiValue + offset;

	try
	{
		if (startAsciiValue < 65 || (startAsciiValue > 90 && startAsciiValue < 97) || startAsciiValue > 122)
		{
			throw invalidCharacterException();
		}
		else if (target < 65 || (target > 90 && target < 97) || target > 122)
		{
			throw invalidRangeException();
		}
		else if ((target >= 65 && target <= 90 && startAsciiValue >= 95 && startAsciiValue <= 122) || (target >= 95 && target <= 122 && startAsciiValue >= 65 && startAsciiValue <= 90))
		{
			throw caseConversionException();
		}
	}
}

