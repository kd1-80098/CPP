#include<iostream>
using namespace std;
class Date
{
    private:
    int day,month,year;

    public:
    Date(int day, int month, int year)
    {
        this->day=day;
        this->month=month;
        this->year=year;
    };

    void initDate()
    {
        this->day=1;
        this->month=2;
        this->year=3;

        cout<<"===========OUTPUT=============="<<endl;
        cout<<"the date is "<<day<<"/"<<month<<"/"<<year<<endl;
    };

    void printDateOnConsole()
    {
        cout<<"===========OUTPUT============"<<endl;
        cout<<"the date is"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    void acceptDateFromConsole()
    {   
        cout<<"enter the values of day, month and year";
        cin>>day>>month>>year;
        cout<<"============OUTPUT==========="<<endl;
        cout<<"the date is"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
    }

    bool isLeapYear()
    {
        if ((this->year%4==0 and this->year%100!=0) or (this->year%400==0))
        {
            cout<<"this is a leap year";
            return 1;
        }
        else
        {
            cout<<"its not the leap year"<<endl;
        }

            return 0;
    }


};

int main()
{   
    Date d(04,02,1999);
    int choice;
    

   do
    {   cout<<"************************************************"<<endl;
        cout<<"enter your choice from below"<<endl;
        cout<<"1. print from console"<<endl; 
        cout<<"2. accept from console"<<endl; 
        cout<<"3. is leap year"<<endl;
        cout<<"4.initialize date "<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                d.printDateOnConsole();
                d.isLeapYear();
                break;
            case 2:
               d.acceptDateFromConsole();
               d.isLeapYear();
                break;
            case 3:
                d.isLeapYear();
                break;
            case 4:
                d.initDate();
                d.isLeapYear();
                break;

            default:
                cout<<"you entered wrong!"<<endl;
        }

    } while(choice!=0);


    return 0;
};

