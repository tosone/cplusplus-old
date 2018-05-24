#include <chrono>
#include <fstream>
#include <iostream>
#include <json/json.h>
#include <numeric>
#include <random>
#include <sstream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  bool sex, living;
  int age;

public:
  Person();
  void set_name(string);
  void set_sex(bool);
  void set_age(int);
  void set_living(bool);
  Json::Value json();
};

void Person::set_name(string str) { name = str; }

void Person::set_sex(bool b) { sex = b; }

void Person::set_living(bool b) { living = b; }

void Person::set_age(int i) { age = i; }

Person::Person() {
  name = "tosone";
  sex  = "male";
  age  = 0;
}

Json::Value Person::json() {
  Json::Value value(Json::objectValue);
  value["name"]   = name;
  value["sex"]    = sex ? "male" : "female";
  value["age"]    = age;
  value["living"] = living;
  return value;
}

string uuid() {
  const char alphanum[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  string ret;
  minstd_rand0 generator(std::chrono::system_clock::now().time_since_epoch().count());
  for (unsigned int i = 0; i < 20; ++i) {
    ret += alphanum[generator() % (sizeof(alphanum) - 1)];
  }
  return ret;
}

int main() {
  string filename = "example.txt";
  vector<int> num(10);
  iota(num.begin(), num.end(), 0);
  Json::Value persons;
  minstd_rand0 generator(std::chrono::system_clock::now().time_since_epoch().count());
  for (int i : num) {
    Person person;
    person.set_age(i);
    person.set_sex(generator() % 2 == 0 ? true : false);
    person.set_living(generator() % 2 == 0 ? true : false);
    person.set_name(uuid());
    persons.append(person.json());
  }
  ofstream out;
  out.open(filename);
  out << persons << std::endl;
  out.close();

  ifstream in(filename);
  Json::Value persons_json;
  in >> persons_json;
  for (auto person : persons_json) {
    cout << person << endl;
  }
  in.close();

  return 0;
}
