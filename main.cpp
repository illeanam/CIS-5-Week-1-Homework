#include <iostream>
#include <string> 
// Assignment 1 — Your Name
using std::cout;
using std::cin;
using std::string;

int main() {
  string name;
  int years = 0;
  cout << "First name: ";
  cin >> name;
  cout << "Last name: ";
  cin >> name;
  cout << "Years coding goal: ";
  cin >> years;
  cout << name << " - I took Python last year and since it was an accelerated course, I don't think I studied as much as I should've. I want to put my best effort to learning this language. (" << years << ")\n";
  return 0;
}
