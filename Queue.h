#pragma once
#include "Stack.h"
#include <memory>
#include <iostream>
using namespace std;

typedef int TElem;

class Queue
{
public:
  Queue(const int &);
  ~Queue(){}; //nu avem nevoie de destructor deoarece folosim smart pointers

  bool add(const TElem &elem);
  void addFromStack(TElem *vec, int _size);
  bool deleteElem(const TElem &elem);
  bool isFull();
  bool isEmpty();
  //simuleaza punerea unei carti pe stack
  TElem push();

  //metodele de afisare
  void show();
  void showElems();
  void showNext();

private:
  TElem *elems;
  TElem *next;
  int cap;
  int head;
  int firstEmpty;
  int size;
};