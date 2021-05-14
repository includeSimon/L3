#include "Stack.h"
#include "Queue.h"
//#include "Test.h"
#include "presentation.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
  // Test t;
  // t.test();

  int n;
  cout << "Introduceti un numar par de elemente: \n";
  cin >> n;

  if (n % 2 != 0 || n <= 2)
    exit(-1);

  Queue q1(n);
  Queue q2(n);
  Stack stack(n);

  int x;
  bool carteRosie = false;
  cout << "Pentru rosu introduceti 1, pentru negru 0 (sau orice alt numar)\n";
  cout << "Introduceti, pe rand, elementele pentru primul stack\n";

  for (int i = 1; i <= n / 2; i++)
  {
    cin >> x;
    q1.add(x);
    if (x == 1)
      carteRosie = true;
  }

  cout << "Introduceti, pe rand, elementele pentru al doilea stack\n";

  for (int i = 1; i <= n / 2; i++)
  {
    cin >> x;
    q2.add(x);
    if (x == 1)
      carteRosie = true;
  }

  if (carteRosie == false){
    cout << "Nu a fost introdusa nici-o carte rosie. Este imposibil sa continuam programul!";
    exit(0);
  }

  UI ui;
  ui.run(q1, q2, stack);

  return 0;
}

/*
  q1:   0 2 3   
  stack:  
  q2:   0 2 3  

  Cazurile in care crapa:
  0 0
  1 1
  si 
  0 0
  1 0

*/