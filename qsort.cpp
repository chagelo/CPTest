#include <iostream>
#include <vector>

void q_sort(std::vector<int> &arr, int l, int r) {
  if (l >= r) {
    return;
  }

  int target = arr[r], ll = l, rr = r-1;
  while (ll < rr) {
    while (arr[ll] < target && ll < rr) ll++;
    while (arr[rr] >= target && ll < rr) rr--;
    std::swap(arr[ll], arr[rr]);
  }
  // 可以保证 arr[ll-1] 一定大于 target, 而 arr[ll] 则不一定
  // 交换之后一定有 arr[ll-1]<arr[ll]
  // 如果不大于，则 arr[ll] 和 arr[ll-1]大小不确定
  if (arr[ll] >= arr[r]) {
    std::swap(arr[ll], arr[r]);
  } else {
    ll++;
  }

  q_sort(arr, l, ll - 1);
  q_sort(arr, ll + 1, r);
}

int n;
int main() {
  std::cin >> n;
  std::vector<int> a(n);

  for (auto &x : a) {
    std::cin >> x;
  }

  q_sort(a, 0, a.size() - 1);

  for (auto &x : a) {
    std::cout << x << " ";
  }
  std::cout << std::endl;
}
