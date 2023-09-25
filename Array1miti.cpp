#include <iostream>
#include <iomanip>
using namespace std;

void Input(int &student,int quizz[10],int midterm[10],int Final[10]);
void View(int &student,int quizz[10],int midterm[10],int Final[10]);
void show(int &student,int quizz[10],int midterm[10],int Final[10]);

int main()
{   
    int student,quizz[10],midterm[10],Final[10];
    char menu;

    do
    {
        cout << "Exercise : \n";
        cout << "==============\n";
        cout << "     MENU" << endl;
        cout << "==============\n";

        cout << "1. Input student records "<<endl;
        cout << "2. View all student records"<<endl;
        cout << "3. show a student by ID"<<endl;
        cout << "4. Exit"<<endl;
        cout << endl;
        cout << "select menu : ";
        cin >> menu;
        if (menu == '1')Input(student,quizz,midterm,Final);
            else if (menu == '2')View(student,quizz,midterm,Final);
                else if (menu == '3')show(student,quizz,midterm,Final);
                    else if (menu == '4')
                    {
                        cout << "Exit"<<endl;
                        break;
                    }
                    
    } while (menu != 0);
    
    cout << endl;
    system ("pause");
    return 0;
}
void Input(int &student,int quizz[10],int midterm[10],int Final[10])
{
    cout << "input Number of student : ";
    cin >> student;
    for (int i=0;i<student;i++)
    {
        cout << "Number"<<i+1<<endl;
        cout << "Input Quiz : ";
        cin >> quizz[i];
        cout << "Input Midterm : ";
        cin >> midterm[i];
        cout << "Input Final : ";
        cin >> Final[i];
        cout << endl;
    }
}

void View(int &student,int quizz[10],int midterm[10],int Final[10])
{
    cout << "--------------------------------"<<endl;
    cout << "StdId   Quiz   Midterm   Final  "<<endl;
    for (int i=0;i<student;i++)
    {
        cout << i+1<<setw(10)<<quizz[i]<<setw(9)<<midterm[i]<<setw(9)<<Final[i]<<endl;
    }
    cout << "--------------------------------"<<endl;

}

void show(int &student,int quizz[10],int midterm[10],int Final[10])
{   
    int id;
    cout << "Input ID : ";
    cin >> id;
    
    for(int i=0;i<id;i++)
    {
        if (id == i+1)
        {
            cout << "--------------------------------"<<endl;
            cout << "StdId   Quiz   Midterm   Final  "<<endl;
            cout << i+1 <<setw(10)<<quizz[i]<<setw(9)<<midterm[i]<<setw(9)<<Final[i]<<endl;
            cout << "--------------------------------"<<endl;

        }
        else 
        {
            cout << "You ID is not found"<<endl;
            break;
        }
       
    }
    system ("pause");
}
   
