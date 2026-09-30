#include <iostream>
#include <ssstream>
#include <fstream>

int main() {

  std::stringstream ss;
  int intA;
  int intB; 
  std::string text;

  std::string sIntA;
  std::string sIntB;

  std::string currentLine;
  
  ifstream inFile;
  
  inFile.open("data.csv");

  while (getLine(inFile, currentLine)){
    ss.clear();
    ss.string("");

    ss.string(currentLine);
    getLine(ss, sIntA, ',');
    getLine(ss, sIntB, ',');
    getLine(ss, text);

    ss.clear();
    ss.string("");
    ss << sIntA << " " << sIntB;
    ss >> intA >> intB;

    int sum = intA + intB;
    for (int i = 0, i < sum; i++){
      std::cout << text << " ";
    } // end for
    std::cout << std::endl;
  } // end while
  return 0;
} // end main
