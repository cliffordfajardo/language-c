#include <stdio.h>
int main () {

typedef struct {
    int x;
    int y;
    int z;
  }  Point3D;
  
  // Dot notation assignments
  Point3D p1;
  p1.x = 0;
  p1.y = 0;
  p1.z = 0;

  // Struct notation assignments
  Point3D p2 = {.x=1, .y=2, .z=3};

  printf("p1 = (%d,%d,%d) and p2 = (%d,%d,%d)\n", p1.x, p1.y, p1.z, p2.x, p2.y, p2.z);
  return 0;
}