/*
Assignment 5 
Q1. Create a class Date with data memebrs day,month and year. 
Cretae a class Person with data members name,address and birthdate. The birthdate should be of 
type Date. 
Create a class Student with data members id, marks, course and joining date, end date. The joining 
date and end date should be of type date. 
Implement above classes. Test all functionalities in main(). 
(Note - Only Perform the Association in the above case. No need of Inheritance)
*/
#include <iostream>
using namespace std;

class Date{
    private:

    int day;
    int month;
    int year;
    public:
      Date(){
        cout<<"inside the date parameterless(int,int,int):"<<endl;

      }
      Date(int d,int m,int y){

        this->day=d;
        this->month=m;
        this->year=y;

      }
      void acceptDate(){
        cout<<"enter the day :"<<endl;
        cin>>day;
        cout<<"enter the month :"<<endl;
        cin>>month;
        cout<<"enter the year :"<<endl;
        cin>>year;

      }
      void displayDate(){
        cout<<"day is :" <<day<<endl;
        cout<<"month is :" <<month<<endl;
        cout<<"year is :" <<year<<endl;

      }



};
//person has a dob
//person is the dependent class
//date is the dependancy class
class Person{
    private:
      string name;
      string address;
      Date dob;
      public:
        Person(){
            cout<<"inside the person parameterless:"<<endl;

        }
        Person(string n,string ads,int day,int month,int year):dob(day,month,year){
            this->name=n;
            this->address=ads;
            

        }
        void acceptPerson(){
            cout<<"enter the name :"<<endl;
            cin>>name;
            cout<<"enter the address :"<<endl;
            cin>>address;
    
            dob.acceptDate();

        }
        void displayPerson(){
            cout<<"name is : "<<name<<endl;
            cout<<"adddress is :"<<address<<endl;
            cout<<"date of the birth :"<<endl;
            dob.displayDate();

        }


};
class Student{
    private:
      int id;
      int marks;
      string course;
      Date join_date;//COMPOSITION 
      Date *end_date;//AGGREGATION 
      public:
       Student(){
        cout<<"parameterles (int,int,string,int,int)"<<endl;


       }
       Student(int id,int marks,string c,int day,int month,int year):  join_date(day,month,year)
       {
        cout<<"parameterized ctor(int,int,string,int,int,int)"<<endl;
        this->id=id;
        this->marks=marks;
        this->course=c;



       }
       void Studentaccept(){
        cout<<"enter the id : "<<endl;
        cin>>id;
        cout<<"enter the marks :"<<endl;
        cin>>marks;

        cout<<"enter the course :"<<endl;
        cin>>course;
        join_date.acceptDate();
      
       }
       void displayStudent(){
        cout<<"id is: "<<id<<endl;
        cout<<"marks is  :"<<marks<<endl;
        cout<<"course is :"<<course<<endl;
        join_date.displayDate();
       


       }
       void addEnddob(){
        end_date=new Date();
        cout<<"enter the course end date "<<endl;
        end_date->acceptDate();
        


       }
       ~Student(){
        delete end_date;
        end_date=NULL;
       }



};
int main(){
    Student s1;
    s1.Studentaccept();
    s1.displayStudent();
    Student s2;
    s2.Studentaccept();
    s2.addEnddob();
    s2.displayStudent();


    Student s3(101,89,"DAC",14,06,2002);
  
    s3.displayStudent();



   
    


   

}
int main1(){
    Person p;
    p.acceptPerson();
    p.displayPerson();

}