#include <algorithm>
#include <cstdlib>
#include <iostream>

#include "number-convert.h"

int main(int argc, char **argv){
  for(int i = 1; i < argc; i+=3){
    // convert our input to a string with upper case letters
    std::string number_string = (std::string) argv[i];
    long long int oldBase = atoi(argv[i+1]);
    long long int newBase = atoi(argv[i+2]);
    transform(number_string.begin(), number_string.end(), number_string.begin(), toupper);

    std::vector <std::string> charSet;

    std::cout << pow(100, 0) << " = 1"<< std::endl;
    std::cout << pow(10, 2) << " = 100" << std::endl;
    std::cout << pow(12, 2) << " = 144" << std::endl;
    std::cout << pow(5, 3) << " = 125" << std::endl;

    charSet.push_back("0");
    charSet.push_back("1");
    charSet.push_back("2");
    charSet.push_back("3");
    charSet.push_back("4");
    charSet.push_back("5");
    charSet.push_back("6");
    charSet.push_back("7");
    charSet.push_back("8");
    charSet.push_back("9");
    charSet.push_back("a");
    charSet.push_back("b");
    charSet.push_back("c");
    charSet.push_back("d");
    charSet.push_back("e");
    charSet.push_back("f");
    charSet.push_back("g");
    charSet.push_back("h");
    charSet.push_back("i");
    charSet.push_back("j");
    charSet.push_back("k");
    charSet.push_back("l");
    charSet.push_back("m");
    charSet.push_back("n");
    charSet.push_back("o");
    charSet.push_back("p");
    charSet.push_back("q");
    charSet.push_back("r");
    charSet.push_back("s");
    charSet.push_back("t");
    charSet.push_back("u");
    charSet.push_back("v");
    charSet.push_back("w");
    charSet.push_back("x");
    charSet.push_back("y");
    charSet.push_back("z");
    charSet.push_back("A");
    charSet.push_back("B");
    charSet.push_back("C");
    charSet.push_back("D");
    charSet.push_back("E");
    charSet.push_back("F");
    charSet.push_back("G");
    charSet.push_back("H");
    charSet.push_back("I");
    charSet.push_back("J");
    charSet.push_back("K");
    charSet.push_back("L");
    charSet.push_back("M");
    charSet.push_back("N");
    charSet.push_back("O");
    charSet.push_back("P");
    charSet.push_back("Q");
    charSet.push_back("R");
    charSet.push_back("S");
    charSet.push_back("T");
    charSet.push_back("U");
    charSet.push_back("V");
    charSet.push_back("W");
    charSet.push_back("X");
    charSet.push_back("Y");
    charSet.push_back("Z");

    // convert our number and print the output number
    std::cout << convertNumber(argv[i], oldBase, newBase, charSet) << std::endl;
  }
  exit(EXIT_SUCCESS);
}
