/**
*File Name: Begin with "assign" and then the assignment number, for example, proj1.cpp, or proj1.h. You must have the extension .cpp or .h
*Academic Integrity Statement: I certify that, while others may have assisted me in brain storming, debugging and validating this program, the program itself is my own work. I understand that submitting code which is the work of other individuals is a violation of the course Academic Integrity Policy and may result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my original work to another individual that it could also result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. See Academic Integrity Procedural Guidelines (Links to an external site.) at:  https://psbehrend.psu.edu/intranet/faculty-resources/academic-integrity/academic-integrity-procedural-guidelines (Links to an external site.)
*Assisted by and Assisted line numbers:
*Your Name: Mio Diaz
*Your PSU user ID:  mvd5044
*Course title CMPSC465 SU2021 
*Due Time: 11:59PM EST, Sunday, June 30, 2021
*Time of Last Modification: 4:22PM, Sunday, June 30, 2021
*Description: Project Two utilizes recursion and loops to print parentheses
*/

// paste test cases at end of prog

// Given pairs of parentheses, write a program in C++ to generate all combinations of well-formed parentheses.
// For example, given , a solution set is:"((()))", "(()())", "(())()","()(())", "()()()"

#include<stdio.h>
#include<iostream>
#include<string>
#include<cmath>
#include<sstream>

//---- namespace --//
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main (){
	// variable declaration
	int count, n; 
	bool printParen = true;

	// ask for number input
	cout << "Enter a number: \n";
	cin >> n;

	count = n;
	while(printParen){
		// print out parentheses
		//----- case 1 ------//
		while(count != 0){
			printf("(");
			count--;
		}
		count = n; 
		while(count != 0){
			printf(")");
			count--;
		}
		//----- end of case 1 -----//
		printf("\n");

		//---- case 2 -----//
		count = n;
			// left side print
			while(1){
				count--;
				if(count == 0){
					printf(")");
					break;
				}else{
					printf("(");
				}
			}
			
			count = n;
			// right side print
			while(1){
				if(count == n)
					printf("(");

				count--;
				 if(count == 0){
					 break;
				 }else {
					 printf(")");
				 }
			}
		// ---- end of case 2 ---//
		printf("\n");

		//----- case 3 ----//
		count = n;
		// left side print
			while(1){
				count--;
				if(count == 0){
					printf(")");
					break;
				}else{
					printf("(");
				}
			}

		// right side
		count = n;
			// right side print
			while(1){
				if(count == n)
					printf("(");

				count--;
				 if(count == 0){
					 break;
				 }else {
					 printf(")");
				 }
			}


		//---- end of case 3 ----//


		//----- case 4 ----//



		//------ end of case 4 -----//


		//----- case 5 -----//


		//---- end of case 5 ----//

		printParen = false;
	}

}
