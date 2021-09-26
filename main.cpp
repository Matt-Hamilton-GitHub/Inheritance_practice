#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Person{
	
private:
	string _name;
	unsigned int _age;
	
	
public:


Person(string name, unsigned int age)
: _name{name}, _age{age}{
	cout << "Person Constructor assigned\n";
	}

~Person(){
	cout << "Person Destructor assigned\n" ;
}

void setName(string n){
	_name = n;
}
	
void setAge(unsigned int age){
	_age = age;
}
	
string getName() {
	return _name;
} 

unsigned int getAge(){
	return _age;
}
	
void print(){
	cout << "Name: " << _name << " " << "Age: " << _age << endl;
}	
	
	};
	

class Employee : Person {
	
private: 
	float _salary;
	string _department;
	vector <int> _hireDate[3];
	
public:

Employee(string name, unsigned int age, float salary, string department, vector <int> hireDate)
: Person(name, age), _salary{salary}, _department{department}, _hireDate{hireDate}{
	cout << "Employee Constructor assigned\n";
}
	
	~Employee(){
	
			cout << "Employee Destructor assigned\n" ;
}
int getHireDate(int n){
//	 int date = _hireDate[0];
//	 return date;
}

	
void print(){
	
	cout << "Salary: " << _salary << "\nDepartment: " << _department << endl;
//    cout << "Hired Date: " << getHireDate << "-" << getHireDate << "-" << getHireDate << endl;
}	
	
	
};


	


int main()
{
	vector <int> date {12,11,2012};
	
	Person newPerson("Alex", 34);
	Employee newEmployee("Alex", 34, 34.56, "Software Engineer", {12,11,2012} );
//	newEmployee.Person::print();
	newEmployee.print();
	
	system("pause");
	return 0;
	
}
