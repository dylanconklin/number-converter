#include <algorithm>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

#include "number-convert.h"

long long int pow(long long int x, long long int y){
  long long int result = 1;
  for(long long int i = 0; i < y; i++)
    result *= x;
  return result;
}

long long int toBase10(std::string number_string, long long int oldBase, std::vector <std::string> & charSet){
  long long int result = 0;
  for(long long int pos = number_string.size()-1; pos > -1; pos--){
    long long int value = getIndex(0, number_string.substr(pos, 1), charSet);
    result += value * pow(oldBase, pos);
    std::cout << value << " * " << oldBase << "^" << pos << " = " << value * pow(oldBase, pos) << std::endl;
  }
  std::cout << result << std::endl;
  return result;
}

std::string toBaseX(long long int base10number, long long int newBase, std::vector <std::string> & charSet){
  std::string result;
  long long int index;
  while(base10number){
    long long int index = base10number%newBase;
    std::cout << base10number << " / " << newBase << " = " << (long long int) base10number / newBase << "\t R " << index << "(" << charSet[index] << ")" << std::endl;
    result.insert(0, charSet[index]);
    base10number = (long long int) base10number/newBase;
  }
  return result;
}

std::string convertNumber(std::string number_string, long long int oldBase, long long int newBase, std::vector <std::string> & charSet){
  reverse(number_string.begin(), number_string.end());

  // Check if parameters are legal
  if(oldBase < 2){
    std::cout << "ERROR: Base of input number not valid." << std::endl;
    std::cout << "Please select a number from 2 to " << charSet.size() << std::endl;
    exit(EXIT_FAILURE);
  }else if(newBase > charSet.size()){
    std::cout << "ERROR: Base of output number not valid." << std::endl;
    std::cout << "Please select a number from 2 to " << charSet.size() << std::endl;
    exit(EXIT_FAILURE);
  }else if(number_string.length() < 1){
    std::cout << "ERROR: No number to convert" << std::endl;
    exit(EXIT_FAILURE);
  }

  // Convert number_string to base 10 number so we can do math on if for converting to the new base
  long long int base10number = toBase10(number_string, oldBase, charSet);
  return (newBase != 10) ? toBaseX(base10number, newBase, charSet) : std::to_string(base10number);
}

// Return index of a character in the character set
long long int getIndex(long long int pos, std::string val, std::vector <std::string> & charSet){
  if(pos == charSet.size()) return -1;
  else if(charSet[pos] == val) return pos;
  else return getIndex(++pos, val, charSet);
}
