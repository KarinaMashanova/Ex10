// Copyright 2021 KarMashanova
#include <iostream>
#include <string>
#include "postfix.h"

int main() {
  //  std::string infix = "2 + 2";
  //  std::string infix = "2 + 6 * 3 / (4 - 2)";
  //  std::string inf = "(2 + 8.3) * (6 - 3.2)";
  std::string inf = "(6 * (4 - 2) + 5) * (2.6 + 3 * 7) - 9";
  std::string postfix = infix2postfix(inf);
  std::cout << postfix << std::endl;
  return 0; }
