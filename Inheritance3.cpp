//Inheritance
#include<iostream>
using namespace std;
const int n = 100;


//Employee class
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


//Developer class
class Developer:public Employee{
public:
    string dev_type;
    Developer(string emp_name,string dep_name,long int money,string type);
    void employee_type();
};

Developer::Developer(string emp_name,string dep_name,long int money,string type):Employee(emp_name,dep_name, money){
    dev_type = type;
}

void Developer::employee_type(){
    cout<<"The employee type based on seniority is : "<<dev_type<<endl;
}


//IT professionals
class IT:public Employee{
public:
    string dev_type;
    IT(string emp_name,string dep_name,long int money,string type);
    void employee_type();
};

IT::IT(string emp_name,string dep_name,long int money,string type):Employee(emp_name,dep_name, money){
    dev_type = type;
}

void IT::employee_type(){
    cout<<"The employee type based on seniority is : "<<dev_type<<endl;
}

int main(){
    cout<<"For Developer class"<<endl;
    Developer dev1("Sourabh Choudhary","Developer",1000000,"Senior");
    dev1.print_name_salary();
    dev1.employee_type();
    cout<<"For IT professionals"<<endl;
    IT it1("Rajesh","IT",100000,"Mid Senior");
    it1.print_name_salary();
    it1.employee_type();
    return 0;
}