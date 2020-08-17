#include <iostream>
#include <string>
using namespace std;
int CalAge(int,int);
int main()
{
  int year,age;
	  for(int n = 1 ; n <= 3 ; n++)
	  { cout << "Enter year " << n << ": ";
	    cin >> year;
	    age = 2563 - year;
	    cout << "Age " << n << ": " << age << endl;
	    CalAge(year,age);
	  }
  return (0);
}

  int CalAge(int year, int age)
      { age = 2563 - year;
  return(age);
      }