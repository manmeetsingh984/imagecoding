#include<iostream>
#include<stdlib.h>

#include "../include/dxf_2D.h"
using namespace std;

int main()
{
 dxf file("figure4.dxf");
 point pt1(50,50), pt2(120,60), pt3(50,20), pt4(55,20), pt5(55,50), pt6(120,50), pt7(120,20), pt8(115,50), pt9(115,20), pt10(50,60), pt11(60,80), pt12(130,80), pt13(130,70), pt14(120,50), pt15(60,50), pt16(60,30), pt17(65,50), pt18(65,30),pt19(130,50), pt20(125,50), pt21(125,60) ;
 rectangle box(pt1, pt2, "layer1", file);
 line box0(pt1, pt3, "layer1", file);
 line box1(pt3, pt4, "layer1", file);
line box2(pt4, pt5, "layer1", file);
line box3(pt6, pt7, "layer1", file);
line box4(pt7, pt9, "layer1", file);
line box5(pt9, pt8, "layer1", file);
line box6(pt2, pt12, "layer1", file);
line box7(pt11, pt12, "layer1", file);
line box8(pt10, pt11, "layer1", file);
line box9(pt12, pt13, "layer1", file);
line box10(pt15, pt16, "layer1", file);
line box11(pt17, pt18, "layer1", file);
line box12(pt16, pt18, "layer1", file);
line box13(pt14, pt13, "layer1", file);
line box14(pt19, pt13, "layer1", file);
line box15(pt20, pt21, "layer1", file);
line box16(pt19, pt20, "layer1", file);
file.save();
return 0;
}
