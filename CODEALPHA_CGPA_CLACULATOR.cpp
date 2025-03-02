//This C++ program is developed by Abhishek Shrikrushna Mote

#include <iostream>
#include <stdlib.h>

using namespace std;

void calculateGPA();
void calculateCGPA();
void Allmethod();

int main()                      //main method
{
    system("cls");
    int input;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"                    GPA & CGPA Calculator (Developed by Abhishek Mote)             "<<endl;
    cout<<"--------------------------------------------------------------------------\n"<<endl;
    cout<<"            MENU:"<<endl;
    cout<<"                   1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"                   2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"                   3. Method that is applied here for calclating GPA & CGPA"<<endl;
    cout<<"                   4. Exit Application"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    sub:
    cout<<"Enter your choice: ";
    cin>>input;
    switch(input)
    {
        case 1:
                calculateGPA();
                break;

        case 2:
                calculateCGPA();
                break;
        case 3:
                Allmethod();
                break;
        case 4:
                exit(EXIT_SUCCESS);
                break;
        default:
            cout<<"You have entered wrong input. Try again!\n"<<endl;
            goto sub;
            break;
    }
}

void calculateGPA()             //calculateGPA method
{
    int q;
    system("cls");
    cout<<"---------------- GPA Calculating -----------------"<<endl;
    cout<<" How many subject's points do you want to calculate ? : ";
    cin>>q;

    float credit [q];
    float point [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<" : ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<" : ";
        cin>>point[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float total;
    for(int j=0;j<q;j++)
    {
        total=credit[j]*point[j];
        sum=sum+total;
    }

    float totalCredit=0;
    for(int k=0;k<q;k++)
    {
        totalCredit=totalCredit+credit[k];
    }

    cout<<"\nTotal Points: "<<sum<<"\tTotal Credits: "<<totalCredit<<"\tTotal GPA: "<<sum/totalCredit<<" ."<<endl;


    sub:
    int menu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>menu;

    switch(menu)
    {
        case 1:
                calculateGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input! Please Choose Again!"<<endl;
              goto sub;
    }
}

void calculateCGPA()                   //calculateCGPA methods
{
    system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many Semester results do you want input ? : ";
    cin>>l;
    cout<<"\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<endl;
    }

    float semtotal=0;
    for(int j=0;j<l;j++)
    {
        semtotal=semtotal+semrs[j];
    }

    cout<<"************** Your CGPA is "<<semtotal/l<<" *************"<<endl;


    sub:
    int menu;
    cout<<"\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>menu;

    switch(menu)
    {
        case 1:
                calculateCGPA();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\nYou have Entered Wrong Input! Please Choose Again!"<<endl;
              goto sub;
    }

}

void Allmethod()                   //Allmethod function
{
    system("cls");
    cout<<"--------------- Method of Calculating GPA & CGPA ---------------\n"<<endl;
    cout<<" GPA = Sum of (Credit * Point) / Total of Credits \n"<<endl;
    cout<<" CGPA =  Sum of GPA / Number of Semesters "<<endl;
    cout<<"-----------------------------------------------------------------\n"<<endl;

    sub:
    int menu;
    cout<<"1. Go Back to Main Menu"<<endl;
    cout<<"2. Exit This App \n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>menu;

    switch(menu)
    {
        case 1:
                main();
                break;
        case 2:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\nYou have Entered Wrong Input! Please Choose Again!"<<endl;
              goto sub;
    }
};