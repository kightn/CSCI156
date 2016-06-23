#include<iostream>
#include "Plot.h" 


int main()
{
	string a;

	Grave JoeBrown, BobSmith, MarySmith, MarkJones, NancyJones;
	string people[5] = { JoeBrown, BobSmith, MarySmith, MarkJones, NancyJones };
	JoeBrown.setAll( 6, 5);
	BobSmith.setAll( 2, 4);
	MarySmith.setAll( 2, 5);
	MarkJones.setAll( 3, 6);
	NancyJones.setAll( 3, 7);
	
for( int i = 0; i <= 4; i++){
	cout << "Row: " << people[i].getRow() << endl;
}
	return 0;
}
