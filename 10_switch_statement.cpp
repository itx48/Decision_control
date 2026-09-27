//c++ program that takes a grade marks (1-5) and prints the corresponding grade using switch statement
#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout<<"entre a grade marks (1,2,3,4,5):";
	cin >>choice;
	
	switch(choice)
	{
		case 1:
			cout<<"entre a 'A' grade marks";
			break;
			case 2:
			cout<<"entre a 'B' grade marks";
			break;
			case 3:
			cout<<"entre a 'C' grade marks";
			break;
			case 4:
			cout<<"entre a 'D' grade marks";
			break;
			case 5:
			cout<<"entre a 'F' grade marks";
			break;
			default:
				cout<<"invalid choice";
	}
	
}
