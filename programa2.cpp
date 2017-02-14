#include<iostream>
#include<cmath>


int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

double seno(double x)
{
  const int N=50;
  double sum=0;
  for(int n=1;n<N;n++){

    sum += (pow((-1),n-1)*pow((x),((2*n)-1)))*((2*n)-1)

  }
}

int main(){



  //https://github.com/jsariasc/ejemplos.git

 
  return 0;
}
