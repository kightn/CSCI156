#include<iostream>
#include "hello_u.h"

int main(){

string nbucket;
int wbucket;
int hbucket;
cout << "Hi what's your name?" << endl;
cin >> nbucket;
cout << endl << "What is the width of the rectangle?" << endl;
cin >> wbucket;
cout << endl << "What is the height of the rectangle?" << endl;
cin >> hbucket;
Naming r;
r.set_values (wbucket,hbucket);
cout << "Hi " << nbucket << ". The area of the rectangle is: " << r.area() << endl << endl;
r.set_name (nbucket);
cout << " " << endl;
return 0;

}# CSCI156
