#include <iostream>
using namespace std ;
int main()
{
	int Score;
	cout << "Enter c++ score : ";
	cin >> Score;
	cout << "you "<< ((Score>=50)? "pass":"fail");
	cout << " with score " << Score <<endl;
	system ("pause");

	return (0);
}