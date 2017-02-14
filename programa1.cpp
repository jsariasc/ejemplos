#include<iostream>
#include <cstdio>

const int N=1000;
int main()
{
  double eps=1.0, one;
  for(int n=0;n<N;n++){
    eps/=2.0;
    one=1.0+eps;
    std::printf("%10d%15.9e%15.6e\n",n,one,eps);
  }
  return 0;
}
