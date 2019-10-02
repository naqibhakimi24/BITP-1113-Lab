//this is exercise3
//this program is to calculate monthly payment for a loan

#include<iostream>
using namespace std;

int displaystar()
{
	cout << "**********************************\n";
	return 0;
}

int main()
{
	displaystar();

	int loan, years;
	double rate, payment;
	cout << "Enter your loan" << endl;
	cin >> loan;
	cout << "Enter the rate " << endl;
	cin >> rate;
	cout << "Enter years" << endl;
	cin >> years;
	payment = ((loan*(rate / 100)*years) + loan) / (years * 12);
	cout <<"RM" << payment <<endl;


	displaystar();
	return 0;

}







