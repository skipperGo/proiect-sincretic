#include <iostream>

using namespace std;

void hanoiTowers(int n, int src, int dest, int aux)
{
  if (n == 1)
  {
    cout << "Move disk 1 from tower " << src << " to tower " << dest << endl;
    return;
  }

  hanoiTowers(n - 1, src, aux, dest);
  cout << "Move disk " << n << " from tower " << src << " to tower " << dest << endl;
  hanoiTowers(n - 1, aux, dest, src);
}

int main()
{
  int n;
  cout << "Enter the number of disks: ";
  cin >> n;
  hanoiTowers(n, 1, 3, 2);
  return 0;
}