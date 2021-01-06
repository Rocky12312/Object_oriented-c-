#include<iostream>
using namespace std;
const int n = 100;

class Employee{
private:
    string name;
    string department;
    long int salary;
    int *arr;
    int arr_sz;
public:
    Employee(){
        //Empty
    }
    Employee(string emp_name,string dep_name,long int money,int *emp_arr,int sz){
        name = emp_name;
        department = dep_name;
        salary = money;
        arr = emp_arr;
        arr_sz = sz;
    }
    void print_name_salary(){
        cout<<"The employee with name "<<name<<" job role "<<department<<" gets a salary "<<salary<<endl;
        cout<<"The employee numbers are :"<<endl;
        for(int i=0;i<arr_sz;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    int arr[] = {1,2,3,4,5,6};
    int sz = sizeof(arr)/sizeof(int);
    Employee emp1("Sourabh Choudhary","Developer",1000000,&arr[0],sz);
    emp1.print_name_salary();
    return 0;
}
