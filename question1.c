#include<stdio.h>
int main(){
	float radius,base,height,area,breadth;
	int grade;
	printf("Enter 1 to find the area of circle\n");
	printf("Enter 2 to find the area of rectangle\n");
	printf("Enter 3 to find the area of triangle\n");
	scanf("%d", &grade);

	
	switch(grade){
		case 1:
			
			printf("Enter the radius: \n");
			scanf("%f", &radius);
			area=3.14*radius*radius;
			printf("The area of the circle is %f\n ", area );
			break;
		
		case 2:

			printf("Enter the height  of the rectangle\n");
			scanf("%f", &height);
			printf("Enter the breadth  of the rectangle\n");
			scanf("%f", &breadth);
			area=(height*breadth);
			printf("The area of rectangle is%f\n ", area );
			break;

		case 3:
			
			printf("Enter the base  of triangle\n");
			scanf("%f", &base);
			printf("Enter the height  of triangle\n");
			scanf("%f", &height);
			area=0.5*base*height;
			printf("The area of triangle is %f\n ", area);
			break;

		default:
			printf("Invalid operation\n");

	}
	return 0;

}