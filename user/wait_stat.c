#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char **argv)
{
  int status;
  struct perf performance;
  wait_stat(&status, &performance);
  printf("performance ctime: %d  performance ttime: %d ", 
          performance.ctime, performance.ttime);
  
  exit(0);
}
