#include<iostream>
using namespace std;
const int n = 100;

class Employee{
private:
    string name;
    string department;
    long int salary;
public:
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

void Employee:: print_name_salary(){
    cout<<"The employee with name "<<name<<" job role "<<department<<" gets a salary "<<salary<<endl;
}

int main(){
    Employee emp1("Sourabh Choudhary","Developer",1000000);
    Employee emp2("Sourabh","Developer",10000000);
    emp1.print_name_salary();
    emp2.print_name_salary();
    return 0;
}
