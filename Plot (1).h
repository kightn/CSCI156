#ifndef VERSION1_H
#define VERSION1_H 

//commit #2

using namespace std;
 
// Creating class
 
class Plot
{
 private:
       struct Graves{  // structured data
  int row;
  int col;

  };
  public:
   int row; //row #
    int col; //column #

    
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

 class Grave : public Plot {
   private:

   
   public:
     string name;
   
   void setAll( int row, int col){
   
     this -> row = row;
     this-> col = col;
   }
 
    
   Grave(){}
   ~Grave(){}
 };

#endif