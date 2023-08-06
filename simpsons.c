#include <stdio.h>
float f(float x){
		return (1/(1+(x*x)));
}
int main()
{
	float a,b,n,s,h;
	printf("enter the value of a, b, n\n");
	scanf("%f%f%f",&a,&b,&n);

	s=0;
	h=(b-a)/n;
	
	int i;
	for (i=0; i<=(n-2); i+=2)
	{
		s=s+( (h/3)*(f(a+i*h)+4*f(a+(i+1)*h)+f(a+(i+2)*h)));
	}
	printf("%f",s);
	return 0;
}
