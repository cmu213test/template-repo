/*
 * main.c: This program allocates some memory then frees it.
 *
 *
 * Author: Jeremy Dropkin, Brian Wei
 * Date: Feb 18 2020
 */

#include <stdlib.h>

int main() {
  void *a = malloc(127361238);
  if (a == NULL) {
    return 1;
  }
  free(a);
  return 0;
}
