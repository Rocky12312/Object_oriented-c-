//Multiple Inheritance
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


//Manager class
class Manages{
public:
    string name;
    string department;
    long int salary;
    int manage;
    Manages(string emp_name,string dep_name,long int money,int manage);
    void print_manages();
};

Manages::Manages(string emp_name,string dep_name,long int money,int man){
    name = emp_name;
    department = dep_name;
    salary = money;
    manage = man;
}

void Manages::print_manages(){
    cout<<"The employee with name "<<name<<" job role "<<department<<" gets a salary "<<salary<<" manages "<<manage<<" employee"<<endl;
}


//Developer class
class Developer:public Employee, public Manages{
public:
    string dev_type;
    Developer(string emp_name,string dep_name,long int money,string type,int manage);
    void employee_type();
};

Developer::Developer(string emp_name,string dep_name,long int money,string type,int manage):Employee(emp_name,dep_name,money),Manages(emp_name,dep_name,money,manage){
    dev_type = type;
}

void Developer::employee_type(){
    cout<<"The employee type based on seniority is : "<<dev_type<<endl;
}

int main(){
    Developer dev1("Sourabh Choudhary","Developer",1000000,"Senior",500);
    cout<<dev1.manage<<endl;
    dev1.print_manages();
    dev1.employee_type();
    return 0;
}