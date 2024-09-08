#include <iostream>

using namespace std;
int sum(int a, int b)
{
  int c = a + b;
  return c;
}

bool license(char age)
{
  if (age >= 18)
  {
    return true;
  }

  else
  {
    return false;
  }
}

int main()
{
  int a, b, age;
  cin >> a >> b >> age;
  cout << sum(a, b) << "\n"
       << "total\n";
  cout << (license(age) == true ? " is an adult" : " is a child") << endl;
  return 0;
}
