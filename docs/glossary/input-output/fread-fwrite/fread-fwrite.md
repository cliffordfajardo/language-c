# `fread` and `fwrite`

### What are `fread` and `fwrite`?
The `fread()` and `fwrite()` functions are used to read and write binary data (raw bytes) from and to binary files.
Below is example of writing some data to a binary file.

```c
#include <stdio.h>

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
```

```
__________________________________
            HEADER
year 4b |   month 4b  | day 4b  |
__________________________________
          DATA SECTION
    mydata (5*4bytes) = 20 bytes
__________________________________
```

1. We first write a 12 byte header containing the date (4 + 4 + 4 = 12 bytes)
2. We then write out the data array, 4 bytes per element. In this example the data are integer values.