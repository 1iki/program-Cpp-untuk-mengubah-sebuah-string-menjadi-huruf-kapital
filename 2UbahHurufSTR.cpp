#include <iostream>
#include <string>
using namespace std;

int main() {
  string str;
  cout << "Ketikan string yang ingin diubah: ";
  getline(cin, str);

  for (int i = 0; i < str.length(); i++) {
    char c = str[i];
    if (c >= 'a' && c <= 'z') {
      c -= 32;
      str[i] = c;
    }
  }

  cout << "String dalam huruf besar adalah: " << str << endl;

  return 0;
}

