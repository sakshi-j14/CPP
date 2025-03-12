/*
 
Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll. 
Mostly they do, but sometimes a car goes by without paying. 
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money 
collected. Model this tollbooth with a class called tollbooth. 
The two data items are a type unsigned int to hold the total number of cars, and a type double to 
hold the total amount of money collected. 
A constructor initializes all data members to 0. A member function called payingCar() increments 
the car total and adds 0.50 to the cash total. An other function, called nopayCar() 
increments the car total but adds nothing to the cash total. Finally, a member function called 
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
*/
#include <iostream>
using namespace std;
class Tollbooth{
    unsigned int total_cars;
    unsigned int paying_cars;
    unsigned int non_paying_cars;
    double total_amt;
    public:
    Tollbooth(){
        total_cars=0;
        paying_cars=0;
        non_paying_cars=0;
        total_amt=0;

    }
     void payingCar(){
        cout<<" paying the amt cars :"<<endl;
        this->total_cars++;
        this->paying_cars++;
        this->total_amt=total_amt+0.50;


    }
    void nonPayCars(){
        cout<<" non paying cars :"<<endl;
        this->total_cars++;
        this->non_paying_cars++;

    }
     void printOnConsole(){
        cout<<" total no of cars :"<<total_cars<<endl;
        cout<<"total no of paying cars :"<<paying_cars<<endl;
        cout<<"total no of non paying cars :"<<non_paying_cars<<endl;
        cout<<"total amt :"<<total_amt<<endl;


     }





    
};
int menu(){
    int choice;
    cout<<"0. Exit"<<endl;
    cout<<"1. show totals and total cars:"<<endl;
    cout<<"2. show the paying cars :"<<endl;
    cout<<"3. show the non paying cars:"<<endl;
    cin>>choice;
    return choice;

}
int main(){
    int choice;
    Tollbooth t1;
    while((choice=menu())!=0){
        switch(choice){
            case 1:{
                
               t1.printOnConsole();
               break;}
            case 2:{
                
                t1.payingCar();
                t1.printOnConsole();
                break;}
            case 3:{
                
                t1.nonPayCars();
                t1.printOnConsole();
                break;
            }   
            default:
               cout<<"thanks for it "<<endl;

        }

    }return 0;
}