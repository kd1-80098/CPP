#include<iostream>
using namespace std;
struct Datee
{
    int day,month,year;

   

     void initDate()
    {
        this->day=4;
        this->month=2;
        this->year=1999;
    }

    void printDateOnConsole()
    {
        printf("the date is %d/%d/%d",this->day,this->month,this->year);
        cout<<"the date is"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;    
    }

    void acceptDateFromConsole()
    {
        printf("enter the values for day,month,year");
        scanf("%d%d%d",&this->day,&this->month,&this->year);
        printf("the date is %d/%d/%d",this->day,this->month,this->year);
    }

    bool isLeapYear()
    {   
        if((this->year%4==0 and this->year%100!=0) or (this->year%400==0))
        {
            printf("It is a leap year");

            return 1;
        }
        else("its not a leap year");

        return 0;   
    }


};

 int main()
    {
         struct Datee d;
     
        int choice;
        

        do{
        printf("****************************************************************\n");
        printf("enter your choice\n 1.Initialize Date\n 2.accept date from console\n 3.print date on console\n");
        scanf("%d",&choice);

        switch(choice)
            {
            case 1:
                d.initDate();
                printf("=====================output=======================\n");
                d.printDateOnConsole();
                break;

            case 2:
                d.acceptDateFromConsole();
                printf("======================OUTPUT======================\n");
                d.printDateOnConsole();
                break;

            case 3:
                printf("======================OUTPUT=======================\n");
                d.printDateOnConsole();
                break;

            default:
                printf("======================OUTPUT=======================\n");
                printf("you entered wrong!\n");
                break;
            }
        }while(choice!=0);
    
    return 0;

    };


   