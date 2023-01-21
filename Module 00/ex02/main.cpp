// C program to illustrate the
// sizeof operator
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
// Driver code
int main()
{
	std::string buff;
	time_t now = time(0);

	tm *ltm = localtime(&now);

	// print various components of tm structure.
	if (1 + ltm->tm_mon < 10)
		buff = "0" + (char)(1 + ltm->tm_mon);
	else
		buff = 1 + ltm->tm_mon;
	cout << '[' << 1900 + ltm->tm_year << buff;
	if (ltm->tm_mday < 10)
		buff = "0" + std::to_string(ltm->tm_mday);
	else
		buff = std::to_string(ltm->tm_mday);
	cout << buff << '_';
	if (ltm->tm_hour < 10)
		buff = "0" + std::to_string(ltm->tm_hour);
	else
		buff = std::to_string( ltm->tm_hour);
	cout << buff;
	if (ltm->tm_min < 10)
		buff = "0" + std::to_string(ltm->tm_min);
	else
		buff = std::to_string(ltm->tm_min);
	cout << buff;
	if (ltm->tm_sec < 10)
		buff = "0" + std::to_string(ltm->tm_sec);
	else
		buff = std::to_string(ltm->tm_sec);
	cout << buff << "] ";
	std::cout << "[19920104_091532] ";

	return 0;
}