#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
struct Student {
  string n;
  double h;
  int s;
  Student() {}
  Student(string n, double h, int s) : n(n), h(h), s(s) {}
  bool operator<(const Student &other) const { return s > other.s; }
} b;
int main(int argc, char *argv[]) {
  int n;
  Student a[15];
  cin >> n;
  for (int i = 1; i <= 5; i++) {
    cin >> a[i].n >> a[i].h >> a[i].s;
  }
  sort(a, a + 6);
  for (int i = 1; i <= 5; i++) {
    cout << a[i].n << a[i].h << a[i].s;
  }
  return 0;
}
