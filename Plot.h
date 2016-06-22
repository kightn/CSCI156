#ifndef VERSION1_H
#define VERSION1_H 

//commit #2

using namespace std;
 
// Creating class
 
class Plot
{
 private:
  
  public:
   int row; //row #
    int col; //column #
  void setAll(int row, int col){
  this -> row = row;
  this -> col = col;
  }
    
    int getRow(){
    return row;
    }
    
    int getCol() {
    return col;
    }
    
   Plot(){
   
   }
    
   ~Plot(){
   
   }
    
};

 

#endif