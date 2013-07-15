#include<iostream>
#include<stdlib.h>

#include "../include/dxf_2D.h"
using namespace std;

int main()
{
  dxf file("line.dxf");
  point pt1(0, 0, 10), pt2(100, 100, 10), pt3(150,0,10);
  

  line horizontal(pt1, pt2, "Layer1", file);
  line horizontal1(pt2, pt3, "Layer1", file);
  line horizontal2(pt3, pt1, "Layer1", file);

  file.save();
  
  return(0);
}
