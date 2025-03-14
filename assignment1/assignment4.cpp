/*
Q1. Write a class for Time and provide the functionality 
Time() 
Time(int h,int m,int s) 
getHour() 
getMinute() 
getSeconds() 
printTime() 
setHour() 
setMinute() 
setSeconds() 
In main create array of objects of Time. 
Allocate the memory for the array and the object dynamically.
*/
#include <iostream>
using namespace std;
class Time{
    private:
       int hour;
       int min;
       int sec;
    public:
    Time():Time(0,0,0){}
     Time(int h,int m,int s){
        this->hour=h;
        this->min=m;
        this->sec=s;

     }
     void printTime(){
      cout<<"hour is: "<<hour<<endl;
      cout<<"min is: "<<min<<endl;
      cout<<"sec is: "<<sec<<endl;

     }
     void setHour(int hour){
      this->hour=hour;

     }
     void setMinute(int min){
      this->min=min;

     }
     void setSeconds(int sec){
      this->sec=sec;

       
     } 
     int getHour(){
        return hour;

     } 
     int getMinute(){
        return min;


     }
     int getSeconds(){
        return sec;
     }



      
};
int main(){
    Time **ptr =new Time *[3];
    ptr[0]=new Time(6,6,12);
    ptr[1]=new Time(7,7,13);
    ptr[2]=new Time(8,8,14);
    for (int i=0;i<3;i++){
      ptr[i]->setHour(12);
      cout<<"final time is: "<<endl;

      ptr[i]->printTime();

    }
    //or deacclocation
    for(int i =0;i<3;i++){
      delete ptr[i];
      ptr[i]=NULL;

    }
    delete []ptr;
    ptr=NULL;
    return 0;




}