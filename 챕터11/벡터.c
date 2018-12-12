#include <stdio.h>

typedef struct Vector {
	float x;
	float y;
}Vec;

Vec get_Vector_Struct(Vec a, Vec b);

int main(void)
{
	Vec a = { 2.0,3.0 };
	Vec b = { 5.0,6.0 };
	Vec sum;

	sum = get_Vector_Struct(a, b);
	printf("벡트의 합은 (%f,%f)입니다\n", sum.x, sum.y);


	printf("\n");
	system("PAUSE");
}


Vec get_Vector_Struct(Vec a, Vec b)
{
	Vec result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;

	return result;
}
