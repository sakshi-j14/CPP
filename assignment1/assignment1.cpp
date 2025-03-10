#include <stdio.h>
struct Date{
    int day;
    int month;
    int year;

};
void printDateOnConsole(struct Date* ptrDate){
    printf("Enter the day : ");
    scanf("%d",&ptrDate->day);
    printf("Enter the month: ");
    scanf("%d",&ptrDate->month);
    printf("Enter the year: ");
    scanf("%d",&ptrDate->year);

}
void acceptDateFromConsole(struct Date* ptrDate){
    printf(" Date=%d : %d :%d \n",ptrDate->day,ptrDate->month,ptrDate->year);
}


int main(){
    struct Date d2;
    printDateOnConsole(&d2);
    acceptDateFromConsole(&d2);
    return 0;
    

}