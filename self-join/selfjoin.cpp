#include<stdio.h>
#include<iostream>
using namespace std;
//self join
int main()
{
    int a[3][10]={/*id*/   {1,2,3,4,5,6,7,8,9,10},
                  /*ssn*/  {123,234,345,456,567,678,789,890,321,432},
                  /*s_ssn*/{0,123,321,0,678,234,321,0, 234,123}};
    int b[3][10];
    int c[4][10];
    int i,j,k;
    cout<<"id\t"<<"ssn\t"<<"s_ssn\n";
    for(i=0;i<10;i++){cout<<a[0][i]<<"\t"<<a[1][i]<<"\t"<<a[2][i]<<"\n";}
    cout<<"\n\n";
    cout<<"self join\n";

    for(i=0;i<3;i++){for(j=0;j<10;j++){b[i][j]=a[i][j];}}
    for(i=0;i<10;i++){c[0][i]=a[0][i];c[1][i]=a[1][i];c[2][i]=a[2][i];}
    for(i=0;i<10;i++){for(k=0;k<10;k++){ if(c[2][i]==b[1][k]){c[3][i]=b[0][k];}}}
    for(i=0;i<10;i++){if(c[3][i]>10){c[3][i]=0;}}
    cout<<"id\t"<<"ssn\t"<<"s_ssn\t"<<"s_id\n";
    for(i=0;i<10;i++){
        cout<<c[0][i]<<"\t"<<c[1][i]<<"\t"<<c[2][i]<<"\t"<<c[3][i]<<"\n";
    }
}
