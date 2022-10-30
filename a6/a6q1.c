#include<stdio.h>

    void rectangle();
    void square();
    void circle();

    int main(){
        rectangle();
        square();
        circle();
        return 0;
   }
   void rectangle(){
   int l;
   int b;
   int area;
   int perimeter;
   printf("enter the value of l and b\n");
   scanf("%d %d",&l,&b);

   area = l*b;
   perimeter = 2*(l+b);

   printf("area of rectangle is %d perimeter of rectangle is %d\n",area,perimeter);
   }

   void square(){
    int side;
    int area;
    int perimeter;

    printf("enter the value of square\n");
    scanf("%d",&side);

    area = side*side;
    perimeter = 4*side;

    printf("area of the square is %d perimeter of the square is %d",area , perimeter);


   }

   void circle(){

    int radius;
    int area ;
    int circumference;
    float pie = 3.14;

    printf("enter the value of radius");
    scanf("%d",&radius);

    area = pie*radius*radius;
    circumference = 2*pie*radius;
    printf("area of the circle is %d circumference of the circle is %d",area,circumference);

    }

    

    
    
