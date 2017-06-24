#include <iostream>
using namespace std;

int main(){
  // pointers are a datatype that points to an address in memory, used with &.
  int score = 5;
  cout << &score << endl;
  int arr[] = {5, 4, 3, 2, 1, 0};
  cout << "The array using sizeof(arr) : " << sizeof(arr) << endl;
  cout << "The array using sizeof(*arr) : " << sizeof(*arr) << endl;

  // learn how to save an address and access it
  int var = 50;
  int *p; // declares p as a pointer;
  p = &var; // sets the p pointer to the reference of var;

  cout << "out put of the var variable : " << var << endl;
  cout << "out put of the p variable : " << p << endl;
  cout << "out put of the *p dereference : " << *p << endl;

  // dynamic memory, how to use it, and how to remove it to save on memory.
  int *sum = new int;
  *sum = 5 + 1;
  cout << "output of sum is : " << *sum << endl;
  delete sum;
  cout << "deleted sum to save on memory." << endl;

  // dynamic memory and best practice, arrays;
  int *n = NULL;
  n = new int[20];
  cout << "output of n array : " << sizeof(n) << endl;
  cout << "output of *n array : " << sizeof(*n) << endl;
  delete n;
  cout << "deleted the n array" << endl;
  return 0;
}
