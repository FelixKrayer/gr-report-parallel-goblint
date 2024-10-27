int f(int x) {
  // ...
  return x;
}

void *T1(void* arg) {
  int a;
  a = f(1);
}

void *T2(void* arg) {
  int b;
  b = f(2);
}

int main() {
  create(T1);
  create(T2);
}
