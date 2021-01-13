#ifndef IR_ARRAY
#define IR_ARRAY

#include <Arduino.h>  

#define finder1 A0    //define line finder S1
#define finder2 A1    //define line finder S2
#define finder3 A2    //define line finder S3
#define finder4 A3    //define line finder S4
#define finder5 4     //define line finder S5

class IrArray
{
public:
  IrArray();  
private:
  int irArray[5];
  void ReadArray();
};

#endif
