/*
Q3. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside 
namespace. Create the object of student and perform accept and display student.
*/
#include <iostream>
#include<string>
using namespace std;
namespace NStudent{
    class Student{
        int rollno;
    
        string name;
        int marks;
        public:
        void accept(){
            std::cout<<"Enter the rollno :"<<std::endl;
            std::cin>>rollno;
            std::cout<<"Enter the name :"<<std::endl;
            std::cin>>name;
            std::cout<<"Enter the marks ;"<<std::endl;
            std::cin>>marks;
    
            
        }
        void display(){
            std::cout<<"roll :"<<rollno<<std::endl;
            std::cout<<"name :"<<name<<std::endl;
            std::cout<<"marks :"<<marks<<std::endl;
    
        }
    
    };

}


int menu(){
    int choice;
    std::cout<<"0.Exit "<<std::endl;
    std::cout<<"1. acccpet the student data"<<std::endl;
    std::cout<<"2. display the data "<<std::endl;
    std::cout<<"Entr the choice :";
    std::cin>>choice;
    return choice;

}
int main(){
    int choice;
    NStudent::Student s1;
    while((choice=menu())!=0){
        switch(choice){
            case 1:
              
              s1.accept();
              break;
            case 2:
               s1.display();
               break;
            default :
              std::cout<<"bye"<<std::endl;
              break;
        }
    }return 0;
}
    
