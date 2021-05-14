// #include <iostream>
// #include "Queue.h"
// #include "Stack.h"
// #include "presentation.h"
// #include "Test.h"
// #include <cassert>
// using namespace std;

// void Test::test()
// {
//   Queue q1(4);
//   Queue q2(4);
//   Stack stack(8);

//   assert(q1.isEmpty() == true);
//   assert(q2.isEmpty() == true);

//   //adaugam carti in prima coada
//   assert(q1.add(0) == true);
//   assert(q1.add(1) == true);
//   assert(q1.add(0) == true);
//   assert(q1.add(1) == true);
//   assert(q1.isEmpty() == false);
//   assert(q1.isFull() == true);

//   //adaugam carti in a doua coada
//   assert(q1.add(0) == true);
//   assert(q1.add(0) == true);
//   assert(q1.add(0) == true);
//   assert(q1.add(1) == true);
//   assert(q1.isEmpty() == false);
//   assert(q1.isFull() == true);

//   UI ui;
//   assert(ui.run(q1, q2, stack) == false);

//   Queue q3(3);
//   Queue q4(3);
//   Stack stack1(6);

//   assert(q3.isEmpty() == true);
//   assert(q4.isEmpty() == true);

//   //adaugam carti in prima coada
//   assert(q3.add(0) == true);
//   assert(q3.add(0) == true);
//   assert(q3.add(0) == true);
//   assert(q3.isEmpty() == false);
//   assert(q3.isFull() == true);

//   //adaugam carti in a doua coada
//   assert(q4.add(0) == true);
//   assert(q4.add(0) == true);
//   assert(q4.add(1) == true);
//   assert(q4.isEmpty() == false);
//   assert(q4.isFull() == true);

//   UI ui2;
//   assert(ui2.run(q3, q4, stack1) == true);

//   Queue q5(3);
//   Queue q6(3);
//   Stack stack2(6);

//   assert(q5.isEmpty() == true);
//   assert(q6.isEmpty() == true);

//   //adaugam carti in prima coada
//   assert(q5.add(0) == true);
//   assert(q5.add(2) == true);
//   assert(q5.add(3) == true);
//   assert(q5.isEmpty() == false);
//   assert(q5.isFull() == true);

//   //adaugam carti in a doua coada
//   assert(q6.add(1) == true);
//   assert(q6.add(4) == true);
//   assert(q6.add(5) == true);
//   assert(q6.isEmpty() == false);
//   assert(q6.isFull() == true);

//   UI ui3;
//   assert(ui3.run(q5, q6, stack2) == false);
// }