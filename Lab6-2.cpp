#include <iostream>

using namespace std;

double inches;
double feet;
double centimeters;
int choice;

int main()
{
	foot:
	cout << "Enter feet: ";
	try{
		cin >> feet;
		if(feet<0){
			inch:
				cout<<"Enter inches:";
				cin>>inches;
			if(inches<0){
			
			}
		}
	}
	catch(int t){
		cout<<"ERROR--Enter Valid Length.\n";
		goto foot;
	}
	
	inches= inches*2.54;
	feet= feet * 30.48;
	centimeters= feet+inches;

	cout << feet<<inches << " foot and inches equals "
	<< centimeters << " centimeters." << endl;
	return 0;

}
