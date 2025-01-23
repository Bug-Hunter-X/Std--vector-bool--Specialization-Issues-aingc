#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic approach
  std::vector<bool> vec;
  vec.push_back(true);
  // ... Accessing vec elements might lead to performance issues and non-intuitive behavior

  // Improved approach
  std::vector<char> vec2;
  vec2.push_back(1); //Represent true
  vec2.push_back(0); //Represent false

  //Using std::bitset (Another option)
  std::bitset<32> bitsetVar;
  bitsetVar[0] = true; //set first bit
  std::cout << bitsetVar << std::endl;

  return 0;
}