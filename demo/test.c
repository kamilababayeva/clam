extern void __CRAB_assume (int);
extern void __CRAB_assert(int);
extern int  __CRAB_nd();
extern void __CRAB_intrinsic_print_invariants(int,...);

int main() {
  int k = __CRAB_nd();
  int n = __CRAB_nd();
  __CRAB_assume (k > 10);
  __CRAB_assume (n > 0);
  
  int x = k;
  int y = k;
  while (x < n) {
    x=x+10;
    y++;
  }
  __CRAB_intrinsic_print_invariants(x);
  __CRAB_assert (x >= 10000);
  // __CRAB_assert (x <= y);  
    __CRAB_intrinsic_print_invariants(x);

  return 0;
}
