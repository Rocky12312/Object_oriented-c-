#include<iostream>
using namespace std;
const int n = 100;

class Employee{
public:
    string name;
    string department;
    long int salary;
    Employee();
    Employee(string emp_name,string dep_name,long int money);
    void print_name_salary();
};

Employee::Employee(){

}

Employee::Employee(string emp_name,string dep_name,long int money){
    name = emp_name;
    department = dep_name;
    salary = money;
}

void Employee::print_name_salary(){
    cout<<"The employee with name "<<name<<" job role "<<department<<" gets a salary "<<salary<<endl;
}

class Developer:public Employee{
public:
    string dev_type;
    Developer(string emp_name,string dep_name,long int money,string type):Employee(emp_name,dep_name, money){
        dev_type = type;
    }
};

int main(){
    Developer dev1("Sourabh Choudhary","Developer",1000000,"Senior");
    dev1.print_name_salary();
    return 0;
}
