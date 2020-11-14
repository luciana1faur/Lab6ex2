#include <iostream>
using namespace std;

int main() {
  int x, nrLinii, cub;

  cout << "Numarul de linii este: ";
  cin >> nrLinii;

for(x = 1; x <= nrLinii; x++){
  cub = x * x * x;
  cout << "Numarul este:  " << x << " iar " << x << " la cub este " << cub << endl;
}

}