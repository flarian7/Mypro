#include<stdio.h>
void main()
{
    int i,n,bt[5],wt[5],tat[5];
    n = 5;
    for(i=0;i<n;i++)
    {
        printf("bt of process %d\n",i+1);
        scanf("%d",&bt[i]);

    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i] = wt[i-1] + bt[i-1];

    }
    for(i=0;i<n;i++)
    {
        tat[i] = bt[i] + wt[i];
    }
    printf("Process      BT WT TAT\n");
    for(i=0;i<n;i++)
    {
      printf("process %d is %d  %d  %d\n",i+1,bt[i],wt[i],tat[i]);
    }

    int sum = 0;
    for(i=0;i<n;i++)
    {

        sum = wt[i] + sum;
    }
    int avg = sum / 5;

    int sum2 = 0;
    for(i=0;i<n;i++)
    {
        sum2 = tat[i] + sum2;
    }
    int avg2 = sum2 / 5;

   printf("Average waiting time is %d\n",avg);
   printf("Average turn around time is %d\n",avg2);


}
