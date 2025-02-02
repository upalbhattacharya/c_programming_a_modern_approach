#include <stdio.h>
#include <math.h>

int main(void)
{
  int height, length, width, volume, weight;

  // Static initialization for now
  height = 8;
  length = 12;
  width = 10;
  volume = height * length * width;
  weight = ceil((float)volume / 166);

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume: %d\n", volume);
  printf("Dimensional weight: %d\n", weight);
}
