#include<stdio.h>
#include<iostream>
using namespace std;
//cross join
int main()
{
    int a[2][2]={/*t1*/ {1,10},
                   /*t2*/{2,9} };
    int b[2][2]={/*t3*/{11,20},
                  /*t4*/{12,19}};
    int c[4][4];
    int i,j,k;
    cout<<"cross join\n\n";
    cout<<"t1\tt2\t\n";
    for(i=0;i<2;i++){cout<<a[0][i]<<"\t"<<a[1][i]<<"\n";}
    cout<<"\nt3\tt4\t\n";
    for(i=0;i<2;i++){cout<<b[0][i]<<"\t"<<b[1][i]<<"\n";}
    cout<<"\noutput result";
    cout<<"\n\nt1\tt2\tt3\tt4\n";
    {for(j=0;j<2;j++){c[0][j]=a[0][j];c[1][j]=a[0][j];c[2][j]=a[1][j];c[3][j]=a[1][j];}}
    for(i=0;i<2;i++){{c[0][i+2]=b[0][i];c[1][i+2]=b[1][i];c[2][i+2]=b[0][i];c[3][i+2]=b[1][i];}}
    {for(j=0;j<4;j++){cout<<c[0][j]<<"\t";}}cout<<"\n";
    {for(j=0;j<4;j++){cout<<c[1][j]<<"\t";}}cout<<"\n";
    {for(j=0;j<4;j++){cout<<c[2][j]<<"\t";}}cout<<"\n";
    {for(j=0;j<4;j++){cout<<c[3][j]<<"\t";}}cout<<"\n";
}
