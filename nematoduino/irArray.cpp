#include "irArray.hpp"

IrArray::IrArray()
{
  pinMode(finder1,INPUT);
  pinMode(finder2,INPUT);
  pinMode(finder3,INPUT);
  pinMode(finder4,INPUT);
  pinMode(finder5,INPUT);
}

void IrArray::ReadArray()
{
  irArray[0] = digitalRead(finder1);
  irArray[1] = digitalRead(finder2);
  irArray[2] = digitalRead(finder3);
  irArray[3] = digitalRead(finder4);
  irArray[4] = digitalRead(finder5);

}
