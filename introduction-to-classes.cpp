<<<<<<< HEAD
#include<iostream>
using namespace std;

class Employee
{
    public:

    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout<<"Hello There!"<<endl;
        cout<<"My name is "<<Name<<". I work at "<<Company<<". I am "<<Age<<" years old.";
        cout<<endl;
    }
};

int main()
{
    Employee E1;
    E1.Name = "John Doe";
    E1.Company = "Company Inc";
    E1.Age = 22;

    E1.IntroduceYourself();

    Employee E2;
    E2.Name = "Jane Doe";
    E2.Company = "Voyance";
    E2.Age = 21;

    E2.IntroduceYourself();
=======
#include<iostream>
using namespace std;

class Employee
{
    public:

    string Name;
    string Company;
    int Age;

    void IntroduceYourself()
    {
        cout<<"Hello There!"<<endl;
        cout<<"My name is "<<Name<<". I work at "<<Company<<". I am "<<Age<<" years old.";
        cout<<endl;
    }
};

int main()
{
    Employee E1;
    E1.Name = "John Doe";
    E1.Company = "Company Inc";
    E1.Age = 22;

    E1.IntroduceYourself();

    Employee E2;
    E2.Name = "Jane Doe";
    E2.Company = "Voyance";
    E2.Age = 21;

    E2.IntroduceYourself();
>>>>>>> dde6ff60d26508e35f838515b43982edaff757b9
}