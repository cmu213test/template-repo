/*
 * main.c: This program allocates some memory then frees it.
 *
 *
 * Author: Jeremy Dropkin
 * Date: Feb 18 2020
 */

#include <stdlib.h>

int main() {
  void *a = malloc(127361238);
  free(a);
  return 0;
}
