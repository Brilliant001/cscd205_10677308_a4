///using switch case

#include <iostream>

using namespace std;

int main (){


	int score;
	
	cout << "enter your score" << endl;
	cin >> score;
	
	switch (score)
	{
	  case 0 ... 39:
	  cout << "you got an F" << endl;
	  break;
	
	case 40 ... 49:
	cout << "you got an E" << endl;
	break;
	
	case 50 ... 59:
	cout << "you got a D" << endl;
	break;
	
	case 60 ... 69:
	cout << "you got a C" << endl;
	break;

		
	case 70 ... 79:
	cout << "you got a B" << endl;
	break;
	
	case 80 ... 100:
	cout << "you got an A" << endl;
	break;
	
	default:
		cout << "this is an invalid input" << endl;}} 
		
	
	
	


