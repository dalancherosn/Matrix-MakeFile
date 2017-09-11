#include <iostream>
#include <armadillo>

void solvesystem(const int & size);

int main(int argc, char** argv)
{
  const int N = atoi(argv[1]); // Repetitions
  const int M = atoi(argv[2]); // Matrix size

  for(int step = 0; step < N; ++step)
    {
      solvesystem(M);
    }
  return 0;
}

void solvesystem(const int & size)
{
  arma::mat A = arma::randu<arma::mat>(size, size);
  arma::vec b = arma::randu<arma::vec>(size);

  arma::vec x = arma::solve(A, b);

  std::cout << x << std::endl;

}
