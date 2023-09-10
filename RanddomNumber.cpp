#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void CheckNum(int num,int ran);

int main ()
{   
    int number,random,value=0;
    srand (time(NULL));
    random =  (rand()%10)+1;        
    cout << "### Welecome to guessing number game ###" << endl;
    cout << "Secret number has been chosen"  << endl;
    do
    {   
        cout << "Guess the number (1 to 10) : ";
        cin >> number; 
        value ++;
        CheckNum(number,random);
    }while (number != random); 

    cout << "\nCongratulations!"<< endl;  
    cout << "The secret number is "<< random <<endl;
    cout << "You made "<< value << " guesses"<<endl;  

    system ("pause");
    return 0;
}

void CheckNum(int num,int ran)
{
    int number=num,random=ran;
   
        if (number < random)
            cout << "The secret number is lower" <<endl;
        else if (number > random)
            cout << "The secret number is higher" <<endl;       
}
