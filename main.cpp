/**
*File Name: Begin with "assign" and then the assignment number, for example, proj1.cpp, or proj1.h. You must have the extension .cpp or .h
*Academic Integrity Statement: I certify that, while others may have assisted me in brain storming, debugging and validating this program, the program itself is my own work. I understand that submitting code which is the work of other individuals is a violation of the course Academic Integrity Policy and may result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. I also understand that if I knowingly give my original work to another individual that it could also result in a zero credit for the assignment, or course failure and a report to the Academic Dishonesty Board. See Academic Integrity Procedural Guidelines (Links to an external site.) at:  https://psbehrend.psu.edu/intranet/faculty-resources/academic-integrity/academic-integrity-procedural-guidelines (Links to an external site.)
*Assisted by and Assisted line numbers:
*Your Name: Mio Diaz
*Your PSU user ID:  mvd5044
*Course title CMPSC465 SU2021 
*Due Time: 11:59PM EST, Sunday, June 13, 2021
*Time of Last Modification: 2:42PM, Friday, June 11, 2021
*Description: Project Two utilizes recursion and loops to print parentheses
*/
// KNOWN BUGS //
/* Currently prints in reverse order then example not sure if specific order is a requirement */
#include<stdio.h>
#include<iostream>
#include<string>
#include<math.h>
#include<sstream>
#include <array>
#include<queue>

#define MAX 100

//---- namespace --//
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::array;

//--- function prototypes----//
void printParentheses(int, int, int,  int);

//--- GLOBAL VAR ---//
array<char, MAX> seq;

int main (){
	// variable declaration
	int n; 
	char usrChoice;

	do {
		// ask for number input
		cout << "Enter a number: \n";
		cin >> n; // store num

		printf("\n\n");
		// Begin Parenthesis Printing //
		printParentheses(0, n, 0, 0);
		// End Parenthesis Printing //

		// enter new num or end prog //
		cout << "\n\n(R)eplay or (Q)uit?" << endl;
		printf(":: ");
		// store user input //
		cin >> usrChoice;
	} while(usrChoice == toupper('R'));
	// end main
} // end prog

// printParentheses 
// takes input n, i, first, and last used recursively 
// to determine direction of paratheses
void printParentheses(int i, int n, int first, int last){
	if(first == n){
		for(const auto& s : seq){
			cout << s;
		}
		printf("\n");
	} else {
		if(last > first){
			seq[i] = ')';
			printParentheses(i+1,n,first+1,last);
		}
		if(last < n) {
			seq[i] = '(';
			printParentheses(i+1,n,first,last+1);
		}
	}
	
} // end print paratheses //

// TEST CASES //
/*

Enter a number: 
3


()()()
()(())
(())()
(()())
((()))


(R)eplay or (Q)uit?
:: R
Enter a number: 
4


()()()()
()()(())
()(())()
()(()())
()((()))
(())()()
(())(())
(()())()
(()()())
(()(()))
((()))()
((())())
((()()))
(((())))


(R)eplay or (Q)uit?
:: Q

Enter a number: 
6


()()()()()()
()()()()(())
()()()(())()
()()()(()())
()()()((()))
()()(())()()
()()(())(())
()()(()())()
()()(()()())
()()(()(()))
()()((()))()
()()((())())
()()((()()))
()()(((())))
()(())()()()
()(())()(())
()(())(())()
()(())(()())
()(())((()))
()(()())()()
()(()())(())
()(()()())()
()(()()()())
()(()()(()))
()(()(()))()
()(()(())())
()(()(()()))
()(()((())))
()((()))()()
()((()))(())
()((())())()
()((())()())
()((())(()))
()((()()))()
()((()())())
()((()()()))
()((()(())))
()(((())))()
()(((()))())
()(((())()))
()(((()())))
()((((()))))
(())()()()()
(())()()(())
(())()(())()
(())()(()())
(())()((()))
(())(())()()
(())(())(())
(())(()())()
(())(()()())
(())(()(()))
(())((()))()
(())((())())
(())((()()))
(())(((())))
(()())()()()
(()())()(())
(()())(())()
(()())(()())
(()())((()))
(()()())()()
(()()())(())
(()()()())()
(()()()()())
(()()()(()))
(()()(()))()
(()()(())())
(()()(()()))
(()()((())))
(()(()))()()
(()(()))(())
(()(())())()
(()(())()())
(()(())(()))
(()(()()))()
(()(()())())
(()(()()()))
(()(()(())))
(()((())))()
(()((()))())
(()((())()))
(()((()())))
(()(((()))))
((()))()()()
((()))()(())
((()))(())()
((()))(()())
((()))((()))
((())())()()
((())())(())
((())()())()
((())()()())
((())()(()))
((())(()))()
((())(())())
((())(()()))
((())((())))
((()()))()()
((()()))(())
((()())())()
((()())()())
((()())(()))
((()()()))()
((()()())())
((()()()()))
((()()(())))
((()(())))()
((()(()))())
((()(())()))
((()(()())))
((()((()))))
(((())))()()
(((())))(())
(((()))())()
(((()))()())
(((()))(()))
(((())()))()
(((())())())
(((())()()))
(((())(())))
(((()())))()
(((()()))())
(((()())()))
(((()()())))
(((()(()))))
((((()))))()
((((())))())
((((()))()))
((((())())))
((((()()))))
(((((())))))


(R)eplay or (Q)uit?
:: Q
*/