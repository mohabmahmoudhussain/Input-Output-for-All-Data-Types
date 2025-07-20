#include<stdio.h>
int main (){
int m;
float o;
char h [100], g;
short a;
long b;
double x,y;
printf("Enter your Name");
scanf(" %s", &h);
printf("Enter your Age");
scanf(" %d", &m);
printf("Enter your Grade");
scanf(" %c", &g);
printf("Enter your GPA");
scanf(" %f", &o);
printf("Enter your Number of Days you Lived on Earth");
scanf(" %ld", &b);
printf("Enter Your Number of Children");
scanf(" %hd", &a);
printf("Enter your X Coordinates");
scanf(" %lf", &x);
printf("Enter your Y Coordinates");
scanf(" %lf", &y);

printf("Your Name is: %s\n", h);
printf("Your Age is: %d\n", m);
printf("Your Grade is: %c\n", g);
printf("Your GPA is: %.2f\n", o);
printf("Number of Days Lived on Earth is: %ld\n", b);
printf("Your Number of Children is: %hd\n", a);
printf("Your X Coordinates: %lf\n", x);
printf("Your Y Coordinates: %lf\n", y);
return 0;
}
