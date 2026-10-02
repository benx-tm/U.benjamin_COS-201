//STUDENT RESULT PROCESSING SYSTEM
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string name,matric;
	int test1, test2, assignment, practical , exam;
	// to collect information
	cout << "----------------------------------" << endl ;
	cout<< "STUDENT'S RESULT" << endl ;
	cout<< "----------------------------------" << endl;
	cout<< "student's name :" ;
	getline (cin,name) ;
	cout<< "matriculation number :" ;
	cin >> matric ;
	cout << "Test 1 :" ;
	cin >> test1 ;
	if (test1<0 || test1 > 10) 
	{
		cout << "INVALID TEST SCORE" <<endl ;
		return 0 ;
	}
	cout << "Test 2 :" ;
	cin >> test2;
	if (test2<0 || test2>10){
		cout << "INVALID SCORE"<<endl;
		return 0 ;
	}
	cout << "Assignment :" ;
	cin >> assignment ;
		if (assignment<0 || assignment>10){
		cout << "INVALID SCORE"<<endl;
		return 0 ;
	}
	cout << "Practical score:" ;
	cin >> practical ;
		if (practical<0 || practical>10){
		cout << "INVALID SCORE"<<endl;
		return 0 ;
	}
	cout << "Examination score :" ; 
	cin >> exam ;
		if (exam<0 || exam>60){
		cout << "INVALID SCORE"<<endl;
		return 0 ;
	}
	 // to get totals
	int CA_score , Total_score ;
	CA_score = test1 + test2 + assignment + practical ;
	Total_score = CA_score + exam ;
	cout << "CA_score :" << CA_score << endl;
	cout << "Total_score :" << Total_score << endl ;
	if (Total_score> 80){
		cout << "OUTSTANDING PERFORMANCE"<< endl ;
	}
	if (Total_score < 40){
		cout<< "Student needs academic improvement" << endl;
	}
	if (Total_score == 38|| Total_score ==39){
		cout << "Borderline failure" << endl;
	}
	if (Total_score >= 70 && Total_score <= 100){
		cout<< "Grade = A"<< endl ;
		return 0;
	}
	if (Total_score >= 60 && Total_score <= 69){
		cout<< "Grade = B"<< endl ;
		return 0 ;
	}
	if (Total_score >= 50 && Total_score <= 59){
		cout<< "Grade = C"<< endl ;
		return 0 ;
	}
	if (Total_score >= 45 && Total_score <= 49){
		cout<< "Grade = D"<< endl ;
		return 0 ;
	}
	if (Total_score >= 40 && Total_score <= 44){
		cout<< "Grade = E "<< endl ;
		return 0;
	}
	if (Total_score >= 0 && Total_score <= 39){
		cout<< "Grade = F"<< endl ;
		return 0 ;
	}
}
