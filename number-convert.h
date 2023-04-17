#ifndef NUMBER_CONVERT_H
#define NUMBER_CONVERT_H

#include <string>
#include <vector>

std::string convertNumber(std::string, long long int, long long int, std::vector <std::string> &);
long long int toBase10(std::string, long long int, std::vector <std::string> &);
std::string toBaseX(long long int, long long int, std::vector <std::string> &);
long long int getIndex(long long int, std::string, std::vector <std::string> &);
long long int pow(long long int, long long int);

#endif
