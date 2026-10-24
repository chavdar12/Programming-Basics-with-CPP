#include <cstdlib>
#include <iomanip>
#include <iostream>

int main() {
  int exam_hour, exam_minute, arrival_hour, arrival_minute;
  std::cin >> exam_hour >> exam_minute >> arrival_hour >> arrival_minute;

  const int time_difference =
      (arrival_hour * 60 + arrival_minute) - (exam_hour * 60 + exam_minute);

  if (time_difference > 0) {
    std::cout << "Late" << '\n';
  } else if (time_difference >= -30) {
    std::cout << "On time" << '\n';
  } else {
    std::cout << "Early" << '\n';
  }

  if (time_difference != 0) {
    const int difference = std::abs(time_difference);
    const char *when = (time_difference > 0) ? "after" : "before";
    if (difference < 60) {
      std::cout << difference << " minutes " << when << " the start" << '\n';
    } else {
      std::cout << difference / 60 << ":" << std::setw(2) << std::setfill('0')
                << difference % 60 << " hours " << when << " the start" << '\n';
    }
  }

  return 0;
}
