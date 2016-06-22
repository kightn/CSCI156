#include<iostream>
#include "Plot.h" 


int main()
{
  Plot Joe_Brown, Bob_Smith, Mary_Smith, Mark_Jones, Nancy_Jones;
	Joe_Brown.setAll( 6, 5);
	Bob_Smith.setAll( 2, 4);
	Mary_Smith.setAll( 2, 5);
	Mark_Jones.setAll( 3, 6);
	Nancy_Jones.setAll(3, 7);
	
	graves[5] = {Joe_Brown, Bob_Smith, Mary_Smith, Mark_Jones, Nancy_Jones};

for( int k = 0; k <= 4; k++){
	cout << "Name: " << graves[k] << endl;
	cout << "Row: " << graves[k].getRow() << endl;
	cout << "Plot #: " << graves[k].getPlot() << endl;
}
	
	return 0;
}
