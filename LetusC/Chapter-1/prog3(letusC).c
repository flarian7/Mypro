#include<stdio.h>


//Calculating aggregate marks and overall percentage of student//
int main()
{
 int maths,science,english,sst,cse;
 printf("Enter the marks scored in maths : ");
 scanf("%d",&maths);

  printf("Enter the marks scored in science : ");
 scanf("%d",&science);

  printf("Enter the marks scored in english : ");
 scanf("%d",&english);

  printf("Enter the marks scored in sst : ");
 scanf("%d",&sst);

  printf("Enter the marks scored in cse : ");
 scanf("%d",&cse);

float AggregateMarks= (maths+science+english+sst+cse);
float PercentageofMarks =  (AggregateMarks/5);
 printf("Aggregate marks of student is %f and Overall percentage of marks scored by student is %f :",AggregateMarks, PercentageofMarks);




    return 0;
}
