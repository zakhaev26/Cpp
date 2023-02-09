#include<stdio.h>
int main()
{
 int prev,curr,diff=0;
 /* at least two numbers are present */
 scanf("%d %d",&prev,&curr);
 printf("%d", curr-prev);
 do {
 prev = curr; // shift current to previous
 scanf("%d", &curr); // read next : the new current
 if (curr == -1) { // we are done
 printf("\n"); // print newline and break
 break;
 }
 diff = curr - prev; // compute new sum of pairs
 printf(" %d", diff); // print sum with a space
 } while(1);
 return 0;
}