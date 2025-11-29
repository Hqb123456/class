#include <iostream>
#include <stdexcept>
using namespace std;
int d(int &a, int &b) {
  if (b == 0) {
    throw 123;
  }
  return a / b;
}
int main(int argc, char *argv[]) {
  int a, b;
  cin >> a >> b;
  try {
    std::cout << d(a, b);
  } catch (runtime_error &s) {
    std::cout << s.what();
  } catch (int &e) {
    cout << e + 1 << endl;
  }
}
