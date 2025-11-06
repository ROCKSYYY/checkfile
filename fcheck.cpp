/************************
* Автор: Долинин Никита *
* Название: Вариант 5   *
************************/
#include <iostream>
#include <fstream>
#include <map>
#include <cctype>
using namespace std;

int main() {
  ifstream fin("text.txt");
  if (!fin.is_open()) {
    cout << "невозможно открыть файл text.txt" << endl;
    return 1;
  }

  map<char, int> freq;
  char ch;

  for (; fin.get(ch); ) {
    if (isalpha(static_cast<unsigned char>(ch))) {
      ch = static_cast<char>(tolower(static_cast<unsigned char>(ch)));
      ++freq[ch];
    }
  }

  fin.close();

  cout << "частота повторения букв:" << "\n";
  for (auto &p : freq) {
    cout << p.first << p.second << '\n';
  }

  return 0;
}
