/*
Q1. Write a menu driven program for Date in a CPP language using structure and also using class. 
Date is having data members day, month, year. Implement the following functions. 
void initDate(); 
void printDateOnConsole(); 
void acceptDateFromConsole(); 
bool isLeapYear();

*/ 
#include <iostream>
using namespace std;
class Date{
    private:
     int day;
     int month;
     int year;


     public:
         void initDate(){
              day = 0;
              month =0;
              year =0;


         }
         void acceptDateFromConsole(){
            cout<<"Enter the day :";
            cin>>day;
            cout<<"Enter the month :";
            cin>>month;
            cout<<"Enter the year: ";
            cin>>year;

         }
         void printDateOnConsole()
         {
            cout<<"day = "<<day<<endl;
            cout<<"month= "<<month<<endl;
            cout<<"year= "<<year<<endl;
            cout<<"day is  "<< day << " month is   "<<month<< " year is   "<<year<<endl;
            if(isLeapYear()){
                cout<<"is a leap year"<<endl;

            }
                else{
                cout<<"not a leap year"<<endl;
                }


         }
         bool isLeapYear(){
            
            if(year%4==0 && year%100 !=0)
                {
                    return true ;

                }
            return false;    
         }
         
         
};

int menu(){
    int choice;
    cout<<"0. Exit "<<endl;
    cout<<"1. acceptDateFromConsole "<<endl;
    cout<<"2.  printDateOnConsole  "<<endl;
    cout<<"Enter the choice -";
    cin>> choice;
    return choice;

}
int main(){
    int choice;
    Date d;
    while((choice =menu()) !=0)
    {
        switch(choice){
            case 1:   
               d.acceptDateFromConsole();
               break;
            case 2:
               d.printDateOnConsole();
               break;
            default:
               cout<<"wrong choice";
            
              break;   



        }
    }return 0;
}
