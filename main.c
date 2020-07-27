
#include <stdio.h>

int calling0(int ((*callback)(void)));
int calling1(int (*callback)(void));

int callback0(void);
int callback1(void);

int main(void) {
  printf("Hello World\n");

  calling0(callback1);
  calling1(callback0);

  return 0;
}

int calling0(int ( (*callback)(void))) {
  printf("%s\n", __func__);
  return callback();
}

int calling1(int (*callback)(void)) {
  printf("%s\n", __func__);
  return callback();
}

int callback0(void) {
  printf("-- %s\n", __func__);
  return 0;
}

int callback1(void) {
  printf("-- %s\n", __func__);
  return 0;
}
