#include "presentation.h"

bool UI::run(Queue &q1, Queue &q2, Stack &stack)
{
  while (q1.isFull() == false && q2.isFull() == false)
  {
    //checking if everything is alright
    if (q1.isEmpty())
    {
      cout << "Jucatorul 1 a ramas fara carti. Deci jucator 1 castiga!";
      return true;
    }

    if (q2.isEmpty())
    {
      cout << "Jucatorul 2 a ramas fara carti. Deci jucator 2 castiga!";
      return false;
    }

    //debug
    cout << endl
         << "Cartile primului jucator: \n";
    q1.show();

    cout << endl
         << "Cartile celui de al doilea jucator: \n";
    q2.show();

    cout << endl;
    //begin
    TElem elem;

    //first player move
    elem = q1.push();
    cout << "Primul jucator pune cartea: " << elem << endl;
    stack.add(elem);

    if (elem == 1)
    {
      cout << "Al doilea jucator preia cartile!\n";
      cout << "Cartile jucatorului 2: ";
      int size;
      TElem *vec = stack.empty(size);
      q2.addFromStack(vec,size);
      q2.show();
      cout << endl;
    }
    //second player move
    elem = q2.push();
    cout << "Al doilea jucator pune cartea: " << elem << endl;
    stack.add(elem);

    if (elem == 1)
    {
      cout << "Primul jucator preia cartile!\n";
      cout << "Cartile jucatorului 1: ";
      int size;
      TElem *vec = stack.empty(size);
      q1.addFromStack(vec, size);
      q1.show();
      cout << endl;
    }
  }

  //daca am ajuns aici, inseamna ca una dintre cozi s-a umplut
  if (q1.isFull()){
    cout << "Primul jucator a castigat meciul!";
    return true;
  }
    cout << "Al doilea jucator a castigat meciul!";
    return false;
}

bool UI::pushCard(Queue &q, Stack &stack, int nr)
{
  if (q.isEmpty())
    return false;

  TElem elem = q.push();
  if (elem == -1) //coada este goala
    return false;

  cout << "Jucatorul " << nr << " a pus cartea: " << elem << '\n';

  stack.add(elem);

  if (elem == 1) //carte rosie
    return true;

  return false; //daca s-a introdus carte neagra
}