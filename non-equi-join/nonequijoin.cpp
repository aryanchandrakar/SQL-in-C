#include<iostream>
#include<stdio.h>
using namespace std;
//non equijoin
int main()
{
    int emp[2][10]={/*id*/      {1,2,3,4,5,6,7,8,9,10},
                    /*salary*/{100,150,200,400,350,250,300,800,900,750}};
    int gra[3][5]={/*grade*/     {1,2,3,4,5},
                   /*higher sal*/{1000,800,600,400,200},
                   /*lower sal*/ {801,601,401,201,0}};
    int i,j,k,a,b;
    int c[3][10];
    cout<<"non-equi join\n\n";
    //data
    cout<<"emp table\n";
    for(i=0;i<10;i++){cout<<"id : "<<emp[0][i]<<"\t salary :\t"<<emp[1][i]<<"\n";}
    cout<<"\ngrade table\n";
    for(i=0;i<5;i++){cout<<"grade : "<<gra[0][i]<<"\t higher salary : "<<gra[1][i]<<"\t lower salary : "<<gra[2][i]<<"\n";}

    for(i=0;i<10;i++){for(j=0;j<5;j++){
        if(emp[1][i]<=gra[1][j] && emp[1][i]>gra[2][j]){cout<<"\nid: "<<emp[0][i]<<" \tsalary: "<<emp[1][i]<<" \tgrade: "<<gra[0][j];}
    }}
}
