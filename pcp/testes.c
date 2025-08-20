#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

double f(double x){
  return x+10;
};

void Trap(double a, double b, int n, double* global_result_p) {
  double h,x,my_result;
  double local_a,local_b;
  int i, local_n;
  int my_rank = omp_get_thread_num();
  int thread_count = omp_get_num_threads();

  h = (b-a)/n;
  local_a = a + my_rank*local_n*h;
  my_result = (f(local_a)+f(local_b))/2.0;

  for(int i=1;i<=local_n-1;i++){
    x = local_a +1*h;
    my_result+=f(x);
  }
}

int main()
{
  
  
  return 0;
}
