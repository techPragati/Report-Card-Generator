
/*
	------ Module 1 Assignment Solution ------

	Program:	Report Card Generator App
	Author: 	Pragati Kumari
*/


#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
#include <iostream>
#include <string>
#include<ios>    
#include<limits>
using namespace std;

int report() {

    // Declaring required variables
    string name;
	char sec, grade;
	int std,math,eng,hindi,sc,s_sc,totalScore;

	// Welcome message
	puts("---------------------------------------------------");
	puts("|=========== REPORT CARD GENERATOR APP ===========|");
	puts("---------------------------------------------------");

	// User input
	puts("Enter the name of the student: ");
	getline(cin,name);

    
	puts("Enter standard: ");
	cin>>std;


	puts("Enter section:");
	cin>>sec;
	
	puts("Enter marks secured in Mathematics: ");
    cin>>math;

    puts("Enter marks secured in English: ");
    cin>>eng;
    
    puts("Enter marks secured in Hindi: ");
    cin>>hindi;

    puts("Enter marks secured in Science: ");
    cin>>sc;

    puts("Enter marks secured in Social Science: ");
    cin>>s_sc;
    
    // Clear input buffer as needed
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    totalScore=math+eng+hindi+sc+s_sc;

    // Terminate program if the totalScore is invalid
    if (totalScore > 500 || totalScore < 0) {
    	puts("Total score cannot not be greater than 500. Please try again!");
    	exit(0);	// Terminate the program.
    }

    // Deciding grade
    if (totalScore >= 450 && totalScore <= 500) {
        grade = 'A';
    } else if (totalScore >= 400 && totalScore < 450) {
        grade = 'B';
    } else if (totalScore >= 350 && totalScore < 400) {
        grade = 'C';
    } else if (totalScore >= 300 && totalScore < 350) {
        grade = 'D';
    } else if (totalScore >= 200 && totalScore < 300) {
        grade = 'E';
    } else { // if (totalScore >= 0 && totalScore < 200)
        grade = 'F';
    }

    // Final output
    puts("\n\nGenerating Report Card!\nPlease wait.... \n");
    usleep(2000*1000);

    puts("------------------------------------------\n");
    puts("\tJawahar Navodaya Vidyalaya \n");
    puts("\t    Annual Report Card \n");

    cout<<"\tName: "<<name<<"\n";
    cout<<"\tStandard: "<<std<<"\n";
    cout<<"\tSection: "<<sec<<"\n";

    puts("\n\tMarks Secured out of 100\n");

    cout<<"\tMathematics: "<<math<<"\n";
    cout<<"\tEnglish: "<<eng<<"\n";
    cout<<"\tHindi: "<<hindi<<"\n";
    cout<<"\tScience:  "<<sc<<"\n";
    cout<<"\tSocial Science: "<<s_sc<<"\n";

    cout<<"\n\tTotal marks secured: "<<totalScore<<"\n";

    cout<<"\tGrade: "<<grade<<"\n";
    puts("------------------------------------------\n");

	return 0;
}
int main()
{
    report();
    return 0;
}