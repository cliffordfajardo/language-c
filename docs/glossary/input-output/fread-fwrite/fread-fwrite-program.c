#include <stdio.h>

/*
        ↓ data.bin file ↓

__________________________________
         HEADER (12 bytes)
year 4b |   month 4b  | day 4b  |
__________________________________
      DATA SECTION (20 bytes)
    mydata (5*4bytes) = 20 bytes
__________________________________
*/


int main() {
  FILE *fp;
  int year = 2012;
  int month = 8;
  int day = 26;
  int mydata[5] = {2, 4, 6, 8, 10};

  fp = fopen("data.bin", "w+"); // create a file `data.bin`
  if (fp == NULL) {
    printf("error opening data.bin\n");
    return 1;
  }
  else {
    // write out the header data for the file
    int bytesout;
    bytesout = fwrite(&year, sizeof(year), 1, fp);  
    bytesout = fwrite(&month, sizeof(month), 1, fp);
    bytesout = fwrite(&day, sizeof(day), 1, fp);


    // write the data
    bytesout = fwrite(mydata, sizeof(int), 5, fp);
    fclose(fp);
  }

  return 0;
}