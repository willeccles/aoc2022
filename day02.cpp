#include <iostream>

int main(void) {
  char lhs, rhs;
  int score{};
  int score2{};

  while (std::cin >> lhs >> rhs) {
    lhs -= 'A';
    rhs -= 'X';

    // part 1
    score += rhs + 1;
    if (rhs == (lhs + 1) % 3) {
      score += 6;
    } else if (lhs == rhs) {
      score += 3;
    }

    // part 2
    if (rhs == 0) {
      score2 += ((lhs + 2) % 3) + 1;
    } else if (rhs == 1) {
      score2 += (lhs + 1) + 3;
    } else {
      score2 += (((lhs + 1) % 3) + 1) + 6;
    }
  }

  std::cout << "part 1: " << score << '\n';
  std::cout << "part 2: " << score2 << '\n';

  return 0;
}
