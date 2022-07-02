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
	
	string lg;
	if (rslt > 84 && rslt < 101) {
		lg = "AA";
	}
	else if (rslt > 75 && rslt < 85) {
		lg = "BB";
	}
	else if (rslt > 60 && rslt < 75) {
		lg = "CC";
	}
	else if (rslt > 50 && rslt < 60) {
		lg = "DD";
	}
	else if (rslt >= 0 && rslt < 50) {
		lg = "FF";
	}
	else {
		cout << "Invalid input";
	}
	return lg;
}



void display();


void main() {
	display();
	float rslt = 0;
	float grade1, grade2;//holds the value of grade1 and grade2 
	int percantage1, percantage2;//holds the value of percantage1 and percantage2
	cout << "Please enter your first grade : ";
	cin >> grade1;
	cout << "Please enter your first grade's percantage : ";
	cin >> percantage1;
	cout << "Please enter your second grade : ";
	cin >> grade2;
	cout << "Please enter your second grade's percantage : ";
	cin >> percantage2;

	if (percantage1 + percantage2 == 100) {
		rslt = total_grade(grade1, percantage1, grade2, percantage2);//rslt keeps the value of that total_grade returned in the function
		cout << "RESULT : " << rslt << endl;
		cout << "The letter grade: " << letter_grade(rslt) << endl;
	}
	else {
		cout << "invalid input! summation of percantage 1 and percantage 2 must be 100!!"<<endl;//assuming that the course have only midterm and final exam the summation of the percantages must be 100 so that we can calculate
	}

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
