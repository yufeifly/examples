#include <stdio.h>
#include <stdlib.h>
#include "person.pb-c.h"
#define MAX_MSG_SIZE 1024

static size_t
read_buffer (unsigned max_length, char *out)
{
  size_t cur_len = 0;
  size_t nread;
  FILE *fp = NULL;
  if((fp = fopen("pb.img","r+")) == NULL) {
	  fprintf(stderr,"fopen error\n");
	  exit(1);
  }
  while ((nread=fread(out + cur_len, 1, max_length - cur_len, fp)) != 0)
  {
    cur_len += nread;
    if (cur_len == max_length)
    {
      fprintf(stderr, "max message length exceeded\n");
      exit(1);
    }
  }
  return cur_len;
}


int main (int argc, const char * argv[]) 
{
  Person *pers;

  // Read packed message from standard-input.
  char buf[MAX_MSG_SIZE];
  size_t pers_len = read_buffer (MAX_MSG_SIZE, buf);

  // Unpack the message using protobuf-c.
 // printf("not yet unpack:%s\n",buf);
  pers = person__unpack(NULL, pers_len, buf);	
  if (pers == NULL)
  {
    fprintf(stderr, "error unpacking incoming message\n");
    exit(1);
  }

  // display the message's fields.
  printf("Received: name=%s\nid=%d\nemail=%s\n",pers->name,pers->id,pers->email);  // required field

  // Free the unpacked message
  person__free_unpacked(pers, NULL);
  return 0;
}
