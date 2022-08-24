#include<iostream>
#include <string>

using namespace std;
class Employee {
private:    
      string name;
    int id;
    int age;
 
public :
       Employee() {
    cout << "Enter employee information :"<<endl;
    cout << "Name: ";
    cin >> name;
    cout << "ID: ";
    cin >> id;
    cout << "Age: ";
    cin >> age;
    cout<<endl;
}
    void display();
};



void Employee::display() {
    cout <<"*******************" << endl
         <<"Employee name:- " << " "<<name <<endl
         <<"Employee ID:-   "<<  " "<<id << endl
         <<"Age:-   "<< " "<<age << endl<<endl;
}
int main() {
    Employee EmpA;
    Employee EmpB;
    Employee EmpC;
    
    EmpA.display();
    EmpB.display();
    EmpC.display();        

    return 0;
}