//code for area and perimeter of rectangle//
#include<stdio.h>
int main()
{
  float area,peri,leng,width;
  printf("Enter the value of length:");
  scanf("%f",&leng);
  printf("Enter the value of width:");
  scanf("%f",&width);
  area=leng*width; //formula for area of rectangle//
  printf("\nArea of rectangle=%f sqcm",area);
  peri=2*(leng+width); //formula for perimeter of rectangle//
  printf("\nPerimeter of rectangle=%f cm", peri);
}


output   

Enter the value of length:13
Enter the value of width:17

Area of rectangle=221.000000 sqcm
Perimeter of rectangle=60.000000 cm
[Process completed - press Enter]