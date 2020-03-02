#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>


int main() {
   chmod("cdae", 0444);
   mkdir("/root/abde", 0);
   return 0;
}