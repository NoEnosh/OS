#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  if(argc < 3){
    fprintf(2, "usage: trace mask pid\n");
    exit(1);
  }
  
  trace(atoi(argv[1]), atoi(argv[2]));
  
  exit(0);
}
