#include <algorithm>
#include <iostream>
#include <vector>

int n;
int main() {
  std::cin >> n;
  std::vector<int> a(n);
  for (auto &x : a) {
    std::cin >> x;
  }
  sort(a.begin(), a.end());

  for (auto &x : a) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
}
