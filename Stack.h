#pragma once
#include <memory>
#include <iostream>
#include <vector>
using namespace std;

typedef int TElem;

struct Node
{
  TElem info;
  int next;
  int prev;
};

class Stack
{
public:
  Stack(int _elem);
  bool add(const TElem &elem);
  TElem* empty(int &_size);  //returneaza un vector de elemente si sterge elementele
  void show();
  bool isEmpty();

  //debugging
  void showInfo();
  void showNext();
  void showPrev();

private:
  Node *nodes;
  int cap;
  int head;
  int tail;
  int firstEmpty;
  int size;
};