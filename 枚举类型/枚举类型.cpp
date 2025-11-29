#include <iostream>
using namespace std;
enum color : unsigned long long { RED = 100, GREEN, YELLOW };
enum color1 : unsigned long long { RED1, GREEN1, YELLOW1 };
int main(int argc, char *argv[]) {
  color c2 = RED;
  std::cout << c2;
  return 0;
}
