#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
  int fd_to_read = open("my-file.txt", O_RDONLY);
  int fd_to_write = open("newtext2.txt",        // This strange syntax is using a bitwise to communiate all the options we want. SO: https://stackoverflow.com/a/22008404/2971795
                          O_WRONLY | O_CREAT,
                          S_IRUSR | S_IWUSR);
  
  if(fd_to_read == -1 || fd_to_write == -1) {
    printf("One file wouldn't open!\n");
    return -1;
  }

  char c;
  int bytes;
  while( (bytes == read(fd_to_read, &c, sizeof(c))) > 0 ) {
    if( c == '.') {
      c = '!';
    }
    
    write(fd_to_write, &c /* return the address of c*/, sizeof(c));
  }
}