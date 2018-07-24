#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<linux/ip.h>
#include<linux/icmp.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include"pcap.h"

int main(void)
{
  /* Allocate a buffer large enough to hold IP and ICMP header */

  /* Declare pointers to appropriately offset IP and ICMP headers */

  /* Populate the headers with data */

  /* Write the buffer to file using write_pcap() */

  /* Free dynamic memory */
  
  return EXIT_SUCCESS;
}
