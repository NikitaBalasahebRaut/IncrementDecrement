//program for predecrement and post decrement

#include<iostream>
using namespace std;

int main()
{

int i = 10, j = 10, k = 10, l = 10;
int a = 0,b = 0;
a = i--;
b = --j;

cout<<a<<"\t"<<i<<"\n";
cout<<b<<"\t"<<j<<"\n";

k--;
--i;

cout<<k<<"\t"<<l<<"\n";

return 0;
}

/*
output 
10      9
9       9
9       10

*/