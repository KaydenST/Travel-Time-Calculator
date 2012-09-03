#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main () {
	
	string input = "";
	
	cout << endl << "Welcome to the travel time calculator.  It will tell you the time it takes to   get from Point A to Point B. Adjust accordingly for time zone differences. The  units will correlate (miles per hour will give you hours and you will have to   enter miles, kilometers per second will give you seconds, and you will have to  enter kilometers, etc.)" << endl;
	
	short int choice = 0;
	
	 while (true) {
   cout << "Press any key to continue: " << endl;
   getline(cin, input);
   	if (choice != 0.0000001)
	{
		goto Travel;
		}
	}
	
	Travel:
		
			while (true) {
				
				float speed = 0;
				float distance = 0;
				float time = 0;
				
				cout << endl << "Please enter the speed you are traveling at: ";
				cin >> speed;
				cout << endl << "Please enter the distance you are going to travel: ";
				cin >> distance;
				time = distance / speed;
				cout << endl << "The amount of time the trip will take is: " << time << endl;
			}
}
