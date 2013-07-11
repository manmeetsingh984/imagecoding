#include<iostream>
#include<stdlib.h>

#include "../include/dxf_2D.h"
using namespace std;

int main()
{
dxf file("figure2.dxf");
point pt1(0,0), pt2(10,2), pt3(0,2), pt4(3,10), pt5(7,10), pt6(5,10);
rectangle box(pt1, pt2, "layer1", file);
line horizontal(pt3, pt4, "layer1", file);
line horizontal1(pt2, pt5, "layer1", file);
circle box1(pt6, 2, "layer1",file);
circle box2(pt6, 1, "layer1",file);
file.save();
}
