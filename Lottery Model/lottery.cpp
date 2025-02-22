#include <iostream>

using namespace std;

int main() {
	int userNumber;

	cout << "Hello! Welcome to the lottery game!" << endl;
	cout << "Please enter a number between 1 and 1000." << endl;
	cin >> userNumber;

	switch (userNumber) {
	case 969:
		cout << "Congratulations! You won $10!" << endl;
		break;
	case 96:
		cout << "Congratulations! You won $100!" << endl;
		break;
	case 169:
		cout << "Congratulations! You won $1000!" << endl;
		break;
	case 196:
		cout << "Congratulations! You won $10,000!" << endl;
		break;
	case 12:
		cout << "Congratulations! You won $100,000!" << endl;
		break;
	}

	if (userNumber != 969 && userNumber !=96  && userNumber !=169 && userNumber !=196 && userNumber !=12)
		cout << "Sorry, you did not win. Better luck next time!" << endl;

	return 0;
}