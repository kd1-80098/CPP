#include<iostream>
using namespace std;

class Students
{
    private:

    int rollno;
    string name;
    int marks;

    public:

    void initStudents()
    {
        this->rollno=1;
        this->name="Manas";
        this->marks=100;

        cout<<"================Student Information==============="<<endl;
        cout<<"Name: "<<name<<"\nRoll No: "<<rollno<<"\nMarks: "<<marks<<endl;
    }

    void printStudentOnConsole()
    {   
        cout<<"================Student Information==============="<<endl;
        cout<<"Name: "<<name<<"\nRoll No: "<<rollno<<"\nMarks: "<<marks<<endl;

    }

    void acceptStudentFromConsole()
    {
        printf(" Enter Rollno, Name, Marks of student\n");
        cin>>rollno>>name>>marks;
        cout<<"================Student Information==============="<<endl;
        cout<<"Name: "<<name<<"\nRollno: "<<rollno<<"\nMarks: "<<marks<<endl;

    }


};

 int main()
    {
        Students s;
        int choice;

        do
        {
            cout<<"***************************************************************************"<<endl;
            cout<<"Enter your choice\n 1.Initialize Student\n 2.Accept Student Info\n 3.Print Student Info"<<endl;
            cin>>choice;
             switch(choice)
             {
                case 1:
                    s.initStudents();
                  // s.printStudentOnConsole();
                   break;
                case 2:
                    s.acceptStudentFromConsole();
                  //  s.printStudentOnConsole();
                    break;
                case 3:
                    s.printStudentOnConsole();
                    break;
                default:
                cout<<"**********You Entered Wrong**************"<<endl;
                    break;
             }

        } while (choice!=0);
        
        return 0;
    }