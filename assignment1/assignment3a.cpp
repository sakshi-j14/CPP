/*
Q1. Write a menu driven program to calculate volume of the box(length * width * height). 
Provide parameterless, parameterized(with 3 parameters) and single paramaterized constructor. 
Create the local objects in respective case and call the function to caluclate area. 
Menu options ->  
1. Calculate Volume with default values 
2. Calculate Volume with length,breadth and height with same value 
3. Calculate Volume with different length,breadth and height values.
*/
#include <iostream>
using namespace std;
class Volume{
    int lenght;
    int width;
    int height;
    int Area;
    public:

    Volume(){
        cout<<"inside the parameterless ctso"<<endl;
        lenght=10;
        width=20;
        height=30;

    }
    Volume(int value){
        cout<<"inside the single parameterized ctsor"<<endl;

        lenght=value;
        width=value;
        height=value;

    }
    Volume(int l,int W,int H){
        cout<<"inside the parameterized cstor"<<endl;
        this->lenght=l;
        this->width=W;
        this->height=H;

    }
    void display(){
        cout<<" lenght is :"<<lenght<<endl;
        cout<<" Width is : "<<width<<endl;
        cout<<"Height is : "<<height<<endl;

        Area=lenght*width*height;
        cout<<"area is  : "<<Area<<endl;
    }



};
int menu(){
    int choice;
    cout<<"0 Exit."<<endl;
    cout<<" 1 volumeWithDefaultValue"<<endl;
    cout<<"2  volumeWithSameValue " <<endl;
    cout<<"3  volumeWithDiffValue " <<endl;
    cout<<"Enter your choice :"<<endl;
    cin>>choice;
    return choice;

}
int main(){
    int choice;
    
    while((choice =menu())!=0)
    {
        switch(choice){
            case 1 :{
                Volume v1;
                v1.display();
                break;

            }
            case 2:
            {
              Volume v2(11);
              v2.display();
              break;
            }
            case 3:
            {
                Volume v3(12,13,14);
                v3.display();
                break;

            }
        }

    }return 0;
}