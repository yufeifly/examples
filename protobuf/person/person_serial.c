#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.pb-c.h"

int main () 
{
  Person yuhan = PERSON__INIT; // AMessage
  void *buf;                     // Buffer to store serialized data
  unsigned len;                  // Length of serialized data
  
  yuhan.name = "liyuhan";
	yuhan.id = 520;
	yuhan.email = "liyuhan@qq.com";
  len = person__get_packed_size(&yuhan);
  
  buf = malloc(len);
  person__pack(&yuhan,buf);
	FILE *fp;
	char ch;
    if((fp=fopen("./pb.img","w+"))==NULL){
        printf("Cannot open file strike any key exit!");
        exit(1);
    } 

  fprintf(stderr,"Writing %d serialized bytes\n",len); // See the length of message
  fwrite(buf,len,1,fp); // Write to stdout to allow direct command line piping
  free(buf); // Free the allocated serialized buffer
  return 0;
}
