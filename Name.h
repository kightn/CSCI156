#ifndef NAME_H
#define NAME_H

using namespace std;

class Name {
public:
  Name();

void display(){
cout << "NATALIE" << endl;
}

~Name();
};

Name::Name(){
cout << "~~~~~~~" << endl;
}
Name::~Name(){
cout << "~~~~~~~" << endl;
}
#endif