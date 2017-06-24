#include <iostream>
#include <json/version.h>

using namespace std;

int main() {
  cout << "JSONCPP_VERSION_HEXA: " << JSONCPP_VERSION_HEXA << endl;
  cout << "JSONCPP_VERSION_STRING: " << JSONCPP_VERSION_STRING << endl;
  cout << "JSONCPP_VERSION_STRING: " << JSONCPP_VERSION_MAJOR << "." << JSONCPP_VERSION_MINOR << "." << JSONCPP_VERSION_PATCH << endl;
  cout << "JSONCPP_USING_SECURE_MEMORY: " << JSONCPP_USING_SECURE_MEMORY << endl;
  return 0;
}
