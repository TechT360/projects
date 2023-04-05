#include <iostream>
using namespace std;


class Employee
{
public:
	string Name;
	string Company;
	int Age;

	void IntroduceYourself()
	{
		cout << "Name: " << Name << endl;
		cout << "Company: " << Company << endl;
		cout << "Age: " << Age << endl;
	}
	Employee(string name, string company, int age) 
	{
		Name = name;
		Company = company;
		Age = age;
	}

};
int main()
{
	Employee employee1 = Employee("Terry", "T10G", 24);
	employee1.IntroduceYourself();

	cout << endl;

	Employee employee2 = Employee("Mark", "Google", 25);
	employee2.IntroduceYourself();
	


	system("pause");
	return 0;
}