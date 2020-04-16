#include <iostream>
#include <cmath>
#include <ctime>
#include <numeric>
#include <iomanip>
using namespace std;
bool gen();

int main() {
  srand((unsigned)time(0));
  int cofactors = 0, coprimes=0, trials = 50000;
  double pie, ratio;
  for (int i = 0;i<trials;i++) {
    if (gen()) {
      coprimes++;
    } else {
      cofactors++;
    }
    if (i % (trials/10) == 0) {ratio = static_cast<double>(coprimes)/trials;
    pie = sqrt(6/ratio);
    cout << setprecision(10)<< pie<< endl;
  }
  }

  ratio = static_cast<double>(coprimes)/trials;
  pie = sqrt(6/ratio);
  cout << setprecision(10) << coprimes << endl << ratio << endl << pie;
  return 0;
}
bool gen() {
  int i = rand() % 1000000000000;
  int j = rand() % 1000000000000;
  if (gcd(i,j) == 1) {
    return true;
  }
  return false;
}
