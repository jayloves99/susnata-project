#include<stdio.h>
#include<conio.h>

struct Sus{  //c++ -> class
	int x;
	int y;
};

struct Sus1{  //c++ -> class
	int x;
	int y;
};

struct Sus2{  //c++ -> class
	int x;
	int y;
};

void main()
{
	struct Sus1 ob;
	ob.x=4;
	ob.y=6;
//	int c = ob.x * ob.y;
	struct Sus2 ob2 = {20,35};
	printf("%d, %d",ob.x, ob.y);
	printf("%d",(ob.x * ob.y));
	
	
}
