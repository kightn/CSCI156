#include<iostream>
#include "Plot.h" 


int main()
{
	int a;

	Grave JoeBrown, BobSmith, MarySmith, MarkJones, NancyJones, TimJones, JohnLowe, SaraSmith, BillSmith;

	JoeBrown.setAll( 6, 5);
	BobSmith.setAll( 2, 4);
	MarySmith.setAll( 2, 5);
	MarkJones.setAll( 3, 6);
	NancyJones.setAll( 3, 7);
	TimJones.setAll( 4, 6);
	JohnLowe.setAll(1, 3);
	SaraSmith.setAll( 5, 4);
	BillSmith.setAll( 5, 5);
	
Grave arr[9] = { JoeBrown, BobSmith, MarySmith, MarkJones, NancyJones, TimJones, JohnLowe, SaraSmith, BillSmith};
	
	cout << "Enter Row # (1-6): " << endl;
		cin >> a;
	
	for( int i = 0; i <= 8; i++){
		if( a == arr[i].getRow()){
			
		cout << "Plot # " << arr[i].getCol() << " is owned" << endl;
	}
	
	}

	
	
	return 0;
}
