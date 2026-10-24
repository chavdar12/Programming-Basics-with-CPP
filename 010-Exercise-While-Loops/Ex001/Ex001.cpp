#include <iostream>
#include <string>

int main() {
  std::string searched_book;
  std::getline(std::cin, searched_book);

  std::string book;
  int books_checked = 0;
  bool found = false;

  while (std::getline(std::cin, book) && book != "No More Books") {
    if (book == searched_book) {
      found = true;
      break;
    }
    books_checked++;
  }

  if (found) {
    std::cout << "You checked " << books_checked << " books and found it."
              << '\n';
  } else {
    std::cout << "The book you search is not here!" << '\n';
    std::cout << "You checked " << books_checked << " books." << '\n';
  }

  return 0;
}
