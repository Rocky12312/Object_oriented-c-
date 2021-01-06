//Multi level Inheritance
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
    int manage;
    Developer(string emp_name,string dep_name,long int money,string type,int man);
    void employee_type();
    void intern_manage();
};

Developer::Developer(string emp_name,string dep_name,long int money,string type,int man):Employee(emp_name,dep_name,money){
    dev_type = type;
    manage = man;
}

void Developer::employee_type(){
    cout<<"The employee type based on seniority is : "<<dev_type<<endl;//Takes by original name
}

void Developer::intern_manage(){
    cout<<"The employee manages : "<<manage<<" intern"<<endl;
}


//Intern class
class Intern:public Developer{
public:
    string intern_name;
    Intern(string emp_name,string dep_name,long int money,string type,int man,string intern_name);
    void print_manages();
};

Intern::Intern(string emp_name,string dep_name,long int money,string type,int man,string intrn_name):Developer(emp_name,dep_name,money,type,man){
    intern_name = intrn_name;
}

void Intern::print_manages(){
    cout<<"I am "<<intern_name<<" managed by "<<name<<" who is "<<dev_type<<" "<<department<<" and manages other "<<manage<<" intern "<<endl;
}

int main(){
    Intern intrn("Sourabh Choudhary","Developer",1000000,"Senior",500,"rahul");
    intrn.print_manages();
    return 0;
    
}