#ifndef VERSION1_H
#define VERSION1_H 

//commit #2

using namespace std;
 
// Creating class
 
class Plot
{
 private:
    int row; //row #
    int col; //column #
  public:
   Plot( int row, int col){
   
   }
    
    int getRow() {
     return row;
    }
    
    int getCol() {
    return col;
    }
    
};

class Grave : public Plot{
  private:
  char sect; 
  public:
    Grave(int row, int col, char sect);
  
  char getSect() {
    return sect;
    }
    ~Grave();

  };
 

 

#endif