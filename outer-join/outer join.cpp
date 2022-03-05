#include<stdio.h>
#include<iostream>
using namespace std;
//outer join
int main()
{
    int a[2][10]={
        {1,2,3,4,5,6,7,8,9,10},
        {11,12,13,14,15,16,17,18,19,20}
    };
    int b[2][10]=
    {
        {1,10,20,30,40,50,60,70,80,90},
        {1,3,5,7,9,11,13,15,17,19}
    };
    int c[3][10];
    int i,j,k;
     //data display
    cout<<"table a data: ";
    for(j=0;j<10;j++){cout<<a[0][j]<<" ";}
     cout<<"\n\t     ";
    for(j=0;j<10;j++){cout<<a[1][j]<<" ";}
    cout<<"\n";
      cout<<"table b data: ";
    for(j=0;j<10;j++){cout<<b[0][j]<<" ";}
     cout<<"\n\t     ";
    for(j=0;j<10;j++){cout<<b[1][j]<<" ";}

    //left outer join
    cout<<"\nleft outer join\n\n";
    for(i=0;i<0;i++)for (j=0;j<10;j++){for(k=0;k<10;k++){
                if(a[0][j]==b[1][k]){c[0][i]=a[1][j];c[1][i]=a[0][j];c[2][i]=b[0][k];}
                }}
    for(k=0;k<10;k++)for(j=0;j<3;j++){if(c[j][k]>100||c[j][k]<0){c[j][k]=0;}}
    for(k=0;k<10;k++){cout<<c[0][k]<<"\t"<<c[1][k]<<"\t"<<c[2][k]<<"\n";}
}
