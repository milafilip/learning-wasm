#include <stdlib.h>
#include <stdio.h>

int main() {
  // printf("hello world\n");

  // removed this line and moved it to JS
  // because it was throwing error
  // EM_ASM( InitWrappers() );
  printf("Initialization complete\n");
}

void test() {
  printf("Button test\n");
}

void int_test(int num) {
  printf("int test=%d\n", num);
}

void float_test(float num) {
  printf("float test=%f\n", num);
}

void string_test(char* num) {
  printf("string test=%s\n", num);
}
