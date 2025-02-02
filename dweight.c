#include <stdio.h>
#include <math.h>

int main(void)
{
  int height, length, width, volume, weight;

  // Static initialization for now
  print("Enter height of box: ");
  scanf("%d", &height);
  print("Enter length of box: ");
  scanf("%d", &length);
  print("Enter width of box: ");
  scanf("%d", &width);
  volume = height * length * width;
  weight = ceil((float)volume / 166);

  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume: %d\n", volume);
  printf("Dimensional weight: %d\n", weight);
}
