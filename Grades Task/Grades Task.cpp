//#include "stdafx.h"
#include "pch.h"
#include <iostream>
#include <windows.h> 
#include <cstdlib>
#include <cstdio>
#include <string>
#include <fstream>
#include <cstdio>
#include <ctype.h>
#include <cstring>
#include <iostream>
#include <vector>

#define elif else if

/* Output
Name
has the student passed?
What grade did they achieve?
How many students passed?
How many students failed?
What was the highest grade achieved and by who?
What was the average mark and grade achieved?
*/

using namespace std;


std::string Grades(int score)
{
	int percentages[7] = { 10,  30,  50,  70,  80,  90,  100 };
	std::string grades[7] = { "F", "E", "D", "C", "B", "A", "A*" };

	for (int i = 0; i < 7; ++i) {
		if (score <= percentages[i]) {
			return grades[i];
		}
	}
	return grades[0];
}

//The score passed works its way along the array until it reaches one that corresponds with the input, then it returns the grade that has the same 0-6 location in the grades array, and if the input doesn't match any of the options, then it just returns F.

int main()
{
	string Student[8] = {};
	int Score[8] = { 1 };
	char Grade[8] = {};
	int iRound = 1, iCount = 0;
	std::vector<std::string> dudentIds;

	while (iRound < 9) {

		for (iCount = 0; iCount < 8; iCount++) {
			cout << "What is the name of Student " << iCount + 1 << "?" << endl;
			cin >> Student[iCount];
			cout << "What score did this student achieve in their assessment?" << endl;
			cin >> Score[iCount];

			if (Score[iCount] <= 51)
			{
				cout << Student[iCount] << " has unfortunatley failed this assesment with a score of " << Score[iCount] << ", the minimum score to pass was 51." << endl;
				cout << "Grade achieved: " << Grades(Score[iCount]) << endl;
			} else
			{
				cout << Student[iCount] << " has passed this assessment with a score of " << Score[iCount] << ". Congratulations!" << endl;
				cout << "Grade achieved: " << Grades(Score[iCount]) << endl;
			}
			//cout << "Making sure that this is still working..." << endl;

			iRound++;

		}

	}

	getchar();

	return 0;
}

