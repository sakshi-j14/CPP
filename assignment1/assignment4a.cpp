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
//In main create array of objects of Time. 
//Allocate the memory for the array and the object dynamically.


int main(){
    int n;
    cout<<"enter the n no of array :"<<endl;
    cin>>n;
   Time *ptr =new Time[n];
   for(int i =0;i<n;i++){
    int hh,mm,ss;
    cout<<"enter time (hh,mm,ss)"<<i+1<<":";
    cin>>hh>>mm>>ss;
    ptr[i].setHour(hh);
    ptr[i].setMinute(mm);
    ptr[i].setSeconds(ss);
    cout<<"final:"<<endl;
    ptr[i].printTime();


   }

}