#import<stdio.h>
#import<conio.h>

struct Sus
{
	int x,y;
	float b;
};

int main()
{
	struct Sus obj1 = {0,1,0.2};
	struct Sus obj2 = {7,6,0.2};
	struct Sus obj3 = {5,1,0.3};
	struct Sus obj4 = {6,2,0.2};
	 //initialize korte hobe
	printf("x = %d and y = %d b = %0.2f\n", obj1.x, obj1.y, obj1.b);
	printf("x = %d and y = %d b = %0.2f\n", obj2.x, obj2.y, obj2.b);
	printf("x = %d and y = %d b = %0.2f\n", obj3.x, obj3.y, obj3.b);
	printf("x = %d and y = %d b = %0.2f\n", obj4.x, obj4.y, obj4.b);
	
	return 0;
}
