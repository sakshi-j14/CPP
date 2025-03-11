/*
 
Q2. Write a menu driven program for Student in CPP language. Create a class student with data 
members roll no, name and marks. Implement the following functions 
void printStudentOnConsole(); 
void acceptStudentFromConsole();
*/
#include <iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int marks;
    public:
    void acceptStudentFromConsole(){
        cout<<"Enter the rollno :";
        cin>>rollno;
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the marks :";
        cin>>marks;

        
    }
    void printStudentOnConsole(){
        cout<<"rollno ="<<rollno<<endl;
        cout<<"name ="<<name<<endl;
        cout<<"marks ="<<marks<<endl;
        
    }
};
int menu(){
    int choice;
    cout<<"0, Exit"<<endl;
    cout<<"1. acceptStudentFromConsole "<<endl;
    cout<<"2.  printStudentOnConsole"<<endl;
    cout<<"Enter the choice -";
    cin>> choice;
    return choice;
}
int main(){
    int choice;
    Student s1;
    while((choice= menu())!=0){
        switch(choice){
            case 1:   
               s1.acceptStudentFromConsole();
               break;
            case 2:
               s1.printStudentOnConsole();
               break;
            default:
               cout<<"wrong choice";
            
              break;   



        }
    }return 0;
}