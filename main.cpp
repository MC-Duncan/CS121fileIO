#include <iostream>
#include <sstream>
#include <fstream>

int main() {

  std::stringstream ss;
  int intA;
  int intB; 
  std::string text;

  std::string sIntA;
  std::string sIntB;

  std::string currentLine;
  
  std::ifstream inFile;
  
  inFile.open("data.csv");

  while (getline(inFile, currentLine)){
    ss.clear();
    ss.str("");

    ss.str(currentLine);
    getline(ss, sIntA, ',');
    getline(ss, sIntB, ',');
    getline(ss, text);

    ss.clear();
    ss.str("");
    ss << sIntA << " " << sIntB;
    ss >> intA >> intB;

    int sum = intA + intB;
    for (int i = 0; i < sum; i++){
      std::cout << text << " ";
    } // end for
    std::cout << std::endl;
  } // end while
  return 0;
} // end main
