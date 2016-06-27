#ifndef PLOT_H
#define PLOT_H 



using namespace std;
 
// Creating class
 
class Plot
{
 private:

  public:
  int row;     //encapsulation
  int col; 

    
    int getRow(){
    return row;
    }
    
    int getCol() {
    return col;
    }
    
    
   Plot(){ //constructor
   
   }
    
   ~Plot(){ //destructor
   
   }
    
};

 class Grave : public Plot { //derived class
   private:
       struct Graves{  // structured data
  int row;
  int col;

  };
   
   public:
 
   
   void setAll( int row, int col){ //overloaded method
   
     this -> row = row;
     this -> col = col;
   }
 
    
   Grave(){}
   ~Grave(){}
 };

#endif