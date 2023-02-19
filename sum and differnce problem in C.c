#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	
    int x,y;
    float a,b;
    scanf("%d %d",&x , &y);
    scanf("%f %f",&a, &b);
    printf("%d ", x+y);
    printf("%d\n",x-y);
    
    printf("%0.1f ", a+b);
    printf("%0.1f\n",a-b);
    
    return 0;
}
