#include <iostream> 
#include <cstdlib>   // pt. prototipul funcției rand()
using namespace std; 

int main()
{
  int i, v;
  srand (time(NULL));
  for(i=1; i <= 9; i++) {
    v = rand() % 49 + 1;
    cout << v << " ";
  }
  cout << endl;
}