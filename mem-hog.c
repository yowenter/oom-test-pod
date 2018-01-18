#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define KB (1024)
#define MB (1024 * KB)
#define GB (1024* MB)



int main(int argc, char *argv[]){

  printf("Evil Allocating Memory...\n");
  if(argc<2){
    printf("Args not enough\n");
    return 0;
  }

  printf("Will Allocate Memory: %s*100MB \n",argv[1]);

  int mem;
  mem = atoi(argv[1]);
  int i=0;
  char *p ;

  while(i<mem){
    p = (char * )malloc(100*MB);
    memset(p, 0, 100*MB);
    printf("Allocating 100 MB OK. Sleep 1 sec\n");
    sleep(1);
    i++;

}


  printf("%d*100MB memory allocated..go to sleep for 1000 sec.\n",mem);

  sleep(1000);



}
