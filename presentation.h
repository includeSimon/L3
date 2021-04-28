#pragma once
#include "Queue.h"
#include "Stack.h"
#include <iostream>
using namespace std;

class UI
{
public:
  void run(Queue &q1, Queue &q2, Stack &stack);

private:
  //push card to stack and return true if card is red
  bool pushCard(Queue &q, Stack &stack, int nr);
  bool Ok(Queue &q, Stack &stack, int nr);
};