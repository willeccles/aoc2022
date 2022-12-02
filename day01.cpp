#include <algorithm>
#include <iostream>
#include <string>

int main(void) {
  int max_c[3]{};
  int c{};
  std::string l;
  bool r;

  while ((r = (bool)std::getline(std::cin, l)) || c != 0) {
    if (r && l.size()) {
      c += std::stoi(l);
    } else {
      for (int i = 2; i >= 0; --i) {
        if (c >= max_c[i]) {
          for (int j = 0; j < i; ++j) {
            max_c[j] = max_c[j + 1];
          }
          max_c[i] = c;
          break;
        }
      }
      c = 0;
    }
  }

  std::cout << "part 1: " << max_c[2] << '\n';
  std::cout << "part 2: " << max_c[0] + max_c[1] + max_c[2] << '\n';

  return 0;
}
