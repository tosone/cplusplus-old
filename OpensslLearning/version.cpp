#include <openssl/opensslv.h>

#include <iostream>

using namespace std;

int main(void) {
  cout << OPENSSL_VERSION_TEXT << endl;
  return 0;
}