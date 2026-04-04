#include<stdio.h>
#include<math.h>
#define PI 3.14
float x_1,x_2,y_1,y_2,D;
void diameter();
void area();
void perimeter();
void main()
{
  printf("\nEnter the coordinates of first point: ");
  scanf("%f%f",&x_1,&y_1);
  printf("\nEnter the coordinates of second point: ");
  scanf("%f%f",&x_2,&y_2);
  diameter();
  area();
  perimeter();
}
void diameter()
{
  D=sqrt(pow(x_2-x_1,2)+(y_2-y_1,2));
  printf("\nDiameter of the circle is %f\nInteger value of diameter is %d",D,(int)D);
}
void area()
{
  float A=PI*pow(D/2,2);
  printf("\nArea of circle is %f\nInteger value of area is %d",A,(int)A);
}
void perimeter()
{
  float P=2*PI*D/2;
  printf("\nPerimeter of circle is %f\nInteger value of perimeter is %d",P,(int)P);
}
