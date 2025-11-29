#include <iostream>
using namespace std;
const int N = 1005;
int a[N];
void bubble_sort(int n) {
  for (int i = 0; i < n - 1; i++) {
    bool is_sorted = true;
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        is_sorted = false;
      }
    }
    if (is_sorted) {
      break;
    }
  }
}
void bubble_sort(int start, int end) {
  int n = end - start + 1;
  for (int i = 0; i < n - 1; i++) {
    bool is_sorted = true;
    for (int j = start; j < end; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
      is_sorted = false;
    }
    if (is_sorted) {
      break;
    }
  }
}
int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bubble_sort(0, 3);
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}
