#include<iostream>
#include<stdlib.h>

#include "../include/dxf_2D.h"
using namespace std;

int main()
{
 dxf file("figure3.dxf");
 point pt1(50,50), pt2(90,50), pt3(100,70), pt4(60,70), pt5(50,20),pt6(55,50),pt8(55,20),pt9(85,50),pt10(85,20),pt11(90,20),pt12(100,90),pt13(100,40),pt14(97,65),pt15(97,40),pt16(63,70),pt17(63,40),pt18(60,40),pt19(60,90),pt20(63,90),pt21(97,70),pt22(97,90), pt23(60,50),pt24(63,50), pt25(63,50), pt26(100,110) ;
 line box(pt1, pt2, "layer1", file);
 line box1(pt2, pt3, "layer1", file);
 line box2(pt3, pt4, "layer1", file);
 line box3(pt4, pt1, "layer1", file);
 line box4(pt1, pt5, "layer1", file);
 line box5(pt6, pt8, "layer1", file);
 line box6(pt5, pt8, "layer1", file);
 line box7(pt9, pt10, "layer1", file);
 line box8(pt10, pt11, "layer1", file);
 line box9(pt2, pt11, "layer1", file); 
 line box10(pt12, pt13, "layer1", file);
 line box11(pt14, pt15, "layer1", file);
 line box12(pt13, pt15, "layer1", file); 
 line box13(pt23, pt18, "layer1", file);
 line box14(pt18, pt17, "layer1", file);
 line box15(pt17, pt25, "layer1", file); 
 line box16(pt4, pt19, "layer1", file);
 line box17(pt19, pt20, "layer1", file);
 line box18(pt20, pt16, "layer1", file);
 line box19(pt21, pt22, "layer1", file); 
 rectangle box20(pt19, pt26, "layer1", file);
 file.save();
 return 0;
}
