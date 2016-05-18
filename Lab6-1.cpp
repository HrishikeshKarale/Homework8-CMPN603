#include <iostream>
#include <string>

using namespace std;

void recursionFunction( int, int, bool );

int main(){
	int max = 0;
	bool passed = false;

	cout<< "Please enter the number of lines: ";
	cin>>max;
			
	recursionFunction( 0, max, false );

	cin.get();

	return 0;
}

void recursionFunction( int current, int max, bool direction ){
	if (current == max){
		direction = true;
	}
	else{
		direction == false;
	}

	for( int i=0; i < max - current; i++ ){
		cout<< " ";	
	}
	
	for( int j=0; j < current; j++ ){
		cout<< "* ";
	}

	cout<< "\n";

	if (direction){
		current--;
	}
	else{
		current++;
	}

	if( direction != true || current != 0 )
	{
		recursionFunction( current, max, direction );
	}

	return;
}


