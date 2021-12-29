#include<iostream.h>
#include<conio.h>
int Max(int, int);
int Knapsack(int wt[],int val[],int W,int n)
{   if(W==0||n==0)   //smallest valid input (base condition)
    {   return 0;
    }
    else if(wt[n-1]<=W)
    {   return Max(val[n-1] + Knapsack(wt,val,W-wt[n-1],n-1), Knapsack(wt,val,W,n-1));
    }
    else if(wt[n-1]>W)
    {   return Knapsack(wt,val,W,n-1);
    }
}
int Max(int a, int b)
{   return a>b?a:b;
}
void main()
{   int wt[]={2,3,4};
    int val[]={10,20,6};
    int W=8;
    int n=sizeof(wt)/sizeof(wt[0]);
    cout<<Knapsack(wt,val,W,n);
    getch();
}