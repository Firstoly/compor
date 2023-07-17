#include <iostream>
#include <string>
using namespace std;
int main ()
{
	string  Name;
	float Salary,Sale,Comissionpercent;
	cout <<"Enter your name :" ;
	cin >> Name;
	cout <<"Enter salary :" ;
	cin >> Salary;
	cout <<"Enter sale :";
	cin >> Sale;
	cout <<"Enter comission percent :";
	cin >> Comissionpercent;
	cout <<"******Output*****\n";
	cout <<"Your name "<< Name <<endl ;
	cout <<" Remove " << Salary + Sale * (Comissionpercent/100) << " bath .\n\n" ;
  
	
	system ("pause");
	return 0;
}