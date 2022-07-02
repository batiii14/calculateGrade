#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
template<class A, class B, class C, class D>

A total_grade(A grade1, B percantage1, C grade2, D percantage2) {
	float result;

	result = grade1 * percantage1 / 100 + grade2 * percantage2 / 100;


	return result;

}string letter_grade(float rslt) {
	string letter;
	if (rslt > 84 && rslt < 101) {
		letter = "AA";
	}
	else if (rslt > 75 && rslt < 85) {
		letter = "BB";
	}
	else if (rslt > 60 && rslt < 75) {
		letter = "CC";
	}
	else if (rslt > 50 && rslt < 60) {
		letter = "DD";
	}
	else if (rslt >= 0 && rslt < 50) {
		letter = "FF";
	}
	else {
		cout << "Invalid input";
	}
	return letter;
}



void display();
void main() {
	display();
	float rslt = 0;
	float grade1, grade2;
	int percantage1, percantage2;
	cout << "Please enter your first grade : ";
		cin >> grade1;
		cout << "Please enter your first grade's percantage : ";
		cin >> percantage1;
		cout << "Please enter your second grade : ";
		cin >> grade2;
		cout << "Please enter your second grade's percantage : ";
		cin >> percantage2;
	rslt = total_grade(grade1, percantage1, grade2, percantage2);
	cout << "RESULT : " << rslt << endl;
	cout << "The letter grade: " << letter_grade(rslt) << endl;

	system("pause");
}



void display() {
	cout << "LETTER GRADE" << "\t\t\t\t RANGE" << endl;
	cout << "AA" << "\t\t\t\t\t 85-100" << endl;
	cout << "BB" << "\t\t\t\t\t 76-84" << endl;
	cout << "CC" << "\t\t\t\t\t 61-75" << endl;
	cout << "DD" << "\t\t\t\t\t 51-60" << endl;
	cout << "FF" << "\t\t\t\t\t Below 50" << endl;




}




