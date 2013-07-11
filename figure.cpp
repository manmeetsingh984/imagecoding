#include<iostream>
#include<stdlib.h>

#include "../include/dxf_2D.h"
using namespace std;

int main()
{
 dxf file("figure.dxf");
 point pt1(0,0), pt2(5,30), pt3(5,5), pt4(50,5), pt5(5,25), pt6(20,25), pt7(30,25), pt8(50,25), pt9(50,0), pt10(55,30), pt12(20,28), pt13(30,28), pt14(15,28), pt15(35,30);
 rectangle box(pt1, pt2, "layer1", file);
 line horizontal(pt3, pt4, "layer1", file);
 line horizontal1(pt5, pt6, "layer1", file);
 line horizontal2(pt7, pt8, "layer1", file);
 rectangle box1(pt9, pt10, "layer1", file);
 line horizontal3(pt6, pt12, "layer1", file);
 line horizontal4(pt7, pt13, "layer1", file);
 rectangle box3(pt14, pt15, "layer1", file);
file.save();
 return 0;
}
