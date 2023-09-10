#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void CheckNum(int n,int ber);

int main ()
{   
    int number,num,value=0;
    srand (time(NULL));
    number =  (rand()%10)+1;        
    cout << "### Welecome to guessing number game ###" << endl;
    cout << "Secret number has been chosen"  << endl;
    do
    {   
        cout << "Guess the number (1 to 10) : ";
        cin >> num; 
        value ++;
        CheckNum(num,number);
    }while (num != number); 

    cout << "\nCongratulations!"<< endl;  
    cout << "The secret number is "<< number <<endl;
    cout << "You made "<< value << " guesses"<<endl;  

    system ("pause");
    return 0;
}

void CheckNum(int n,int ber)
{
    int num=n,number=ber;
   
        if (num < number)
            cout << "The secret number is lower" <<endl;
        else if (num > number)
            cout << "The secret number is higher" <<endl;       
}
