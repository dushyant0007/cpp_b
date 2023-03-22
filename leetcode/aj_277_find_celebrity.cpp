#include<iostream>
#include<vector>
using namespace std;

/* A celebrity is a person who is known to all but does not know anyone at a party. 
If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that 
if an element of row i and column j  is set to 1 it means ith person knows jth person. 
Here M[i][i] will always be 0. */

// !use stack-->
// push all the rows in stack Example(1,2,3)
// pop two elements (1 and 2)
// if(1 know 2)
//  discard 1 and push 2 into stack
// else discard 2 and push 2 into stack

// the final element in stack is potential candidate to be a celebrity(check if complete row is empty->rtn true else false)


