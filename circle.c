#include <stdio.h>

const float PI = 3.14;

float circleArea(float radius)
{
	return PI * radius * radius;
}

float cylinderVolume(float radius, float height)
{
	return circleArea(radius) * height;
}

int main()
{
	float radius;
	float height;

	printf("Enter the radius of the cylinder: ");
	scanf("%f", &radius);

	printf("Enter the height of the cylinder: ");
	scanf("%f", &height);

	printf("\nBase area of the cylinder: %f \n", circleArea(radius));
	printf("Volume of the cylinder: %f", cylinderVolume(radius, height));

	return 0;
}