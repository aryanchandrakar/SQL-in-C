#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int c[3][10];
    int t,i,j,n,m,k;
    int a[2][10]={
        {1,2,3,4,5,6,7,8,9,10},
        {11,12,13,14,15,16,17,18,19,20}
    };
    int b[2][10]=
    {
        {1,10,20,30,40,50,60,70,80,90},
        {1,3,5,7,9,11,13,15,17,19}
    };
    //natural join
    cout<<"inner join \n\n";

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


    cout<<"\nenter the row name of a to be joined :\n";
    cin>>n;
    cout<<"enter the row name of b to be joined :\n";
    cin>>m;
    n=n-1;
    m=m-1;
    i=0;
    t=0;
    if(n==0 && m==0)
        {
        for (j=0;j<10;j++){for(k=0;k<10;k++){
                if(a[0][j]==b[0][k]){c[0][i]=a[1][j];c[1][i]=a[0][j];c[2][i]=b[1][k];i++;t++;}
            }}

        cout<<"a column2 \t\t"; for(i=0;i<t;i++){cout<<c[0][i]<<" ";}cout<<"\n";
        cout<<"a1 and b1 join column\t"; for(i=0;i<t;i++){cout<<c[1][i]<<" ";}cout<<"\n";
        cout<<"b column2 \t\t";for(i=0;i<t;i++){cout<<c[2][i]<<" ";}
        }
    if(n==0 && m==1)
    {
        for (j=0;j<10;j++){for(k=0;k<10;k++){
                if(a[0][j]==b[1][k]){c[0][i]=a[1][j];c[1][i]=a[0][j];c[2][i]=b[0][k];i++;t++;}
                }}
        cout<<"a column2 \t\t"; for(i=0;i<t;i++){cout<<c[0][i]<<" ";}cout<<"\n";
        cout<<"a1 and b2 join column\t"; for(i=0;i<t;i++){cout<<c[1][i]<<" ";}cout<<"\n";
        cout<<"b column1 \t\t"; for(i=0;i<t;i++){cout<<c[2][i]<<" ";}
    }
    if(n==1 && m==0)
    {
    for (j=0;j<10;j++){for(k=0;k<10;k++){
                if(a[1][j]==b[0][k]){c[0][i]=a[0][j];c[1][i]=a[1][j];c[2][i]=b[1][k];i++;t++;}
            }}

        cout<<"a column1 \t\t";for(i=0;i<t;i++){cout<<c[0][i]<<" ";}cout<<"\n";
        cout<<"a2 and b1 join column\t";for(i=0;i<t;i++){cout<<c[1][i]<<" ";}cout<<"\n";
        cout<<"b column2 \t\t";for(i=0;i<t;i++){cout<<c[2][i]<<" ";}
    }
    if(n==1 && m==1)
    {
    for (j=0;j<10;j++){for(k=0;k<10;k++){
                if(a[1][j]==b[1][k]){c[0][i]=a[0][j];c[1][i]=a[1][j];c[2][i]=b[0][k];i++;t++;}
            }}

        cout<<"a column1 \t\t";for(i=0;i<t;i++){cout<<c[0][i]<<" ";}cout<<"\n";
        cout<<"a2 and b2 join column\t";for(i=0;i<t;i++){cout<<c[1][i]<<" ";}cout<<"\n";
        cout<<"b column1 \t\t";for(i=0;i<t;i++){cout<<c[2][i]<<" ";}
    }

}
