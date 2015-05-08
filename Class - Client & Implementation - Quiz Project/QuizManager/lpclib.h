#ifndef _LPCLIB_H
#define _LPCLIB_H

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

void Error (string str);

string GetLine(istream & src=cin);
int GetInt(istream & src=cin);
double GetDouble(istream & src=cin);
char GetChar();

string IntToString(int num);
string DoubleToString(double num);
int StringToInt(string str);
double StringToDouble(string str);
string ConvertToLowerCase(string s);
string ConvertToUpperCase(string s);

int RandomInt(int low, int high);
double RandomDouble(double low, double high);
bool RandomChance(double p);

int __lpclib_user_main(int argc, const char * argv[]);

class CinReplacement;
extern CinReplacement __lpclib_cin;

class CinReplacement
{
public:
	template <typename T>
	CinReplacement & operator>>(const T & thing)
	{
		cout << "\n\n** Use of 'cin' with LPCLib is not supported.\n";
		cout << "** Use GetLine(), GetInt(), etc., instead.\n";
		cout << "** (Exiting program now.)\n\n";
		return (*this);
	}
};

#define cin __lpclib_cin
#define main __lpclib_user_main

#endif
