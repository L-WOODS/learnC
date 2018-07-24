#include <stdio.h> 

int main()
 {

#ifdef PT
	 printf("Name: Platinum\nSymbol: Pt\nAtomic Number: 78\n");

#endif

#ifdef AU 
 printf("Name: Gold\nSymbol: Au\nAtomic Number: 79\n");

#endif

#ifdef AG
  printf("Name: Silver\nSymbol: Ag\nAtomic Number: 47\n");
#endif

return 0;

}

