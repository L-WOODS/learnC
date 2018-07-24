#include<stdio.h>
#include<string.h>
#include<math.h>
#include"program.h"

#ifdef RADIUS
#define CIRCUMFERENCE(x) x*2*M_PI
#endif 

#ifndef RADIUS  
#define CIRCUMFERENCE(x) x*M_PI
#endif 
 
// Don't alter the main function.  Modify the 'modify_me' function
int main(int argc, char *argv[])
{
    return modify_me(validate_input(argc, argv));
}

float modify_me(float x)
{
     // Add your code here
	#ifdef RADIUS

		printf("The circumference based on a radius of %.2f feet is %.2f feet.\n",x,CIRCUMFERENCE(x));
	#endif 

 	#ifndef RADIUS
	printf("The circumference based on a diameter of %.2f feet is %.2f feet.\n",x, CIRCUMFERENCE(x)); 

	#endif

return x;

}
